#include "Render.hh"
#include "FileNotExist.hh"
#include <exception>

Render::Render (void)
: dir_("./Resources") {}

Render::Render (const std::string& dir) 
: dir_(dir) {}

void Render::rend (const std::string& name) const {
	std::string path(dir_);
	path += name + std::string("/") + name + std::string(".rdbx");
	std::ifstream rdbx(path.c_str());
	if (!rdbx.is_open()) 
		throw FileNotExist(path);
	std::string line;
	path.erase(path.end() - 2, path.end());
	path += std::string("dx");
	std::ofstream rddx(path.c_str());
	int count = -1;
	int compared = -1;
	while(getline(rdbx, line)) {
		int current = 0;
		for(std::string::iterator it = line.begin();it != line.end();++it) {
			if(((*it >= '1') && (*it <= '8')) || (*it == '@')) {
				if((*it >= '1') && (*it <= '8')) {
					if(compared == -1) {
						count = 0;
						compared = current;
						rddx << "00" << *it;
					} else
						rddx << "\n" << count << (current - compared) << *it;
				}
				if(it == (line.end() - 1))
					count++;
				current++;
			} else throw std::exception();
		}
	}
}

void Render::setDir (const std::string& dir) {
	dir_ = dir;
}

std::string Render::getDir (void) const {
	return dir_;
}