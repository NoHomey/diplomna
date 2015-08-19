#include "Render.hh"
#include <fstream>
#include <exception>

auto Render::rend (const std::string& dir, const std::string& name) const -> void {
	std::string path {dir + name + "/" + name};
	std::string rdbx {path + ".rdbx"};
	std::ifstream rdbxFile(rdbx.c_str());
	if (!rdbxFile.is_open()) 
		throw std::exception();
	std::string rddx {path + ".rddx"};;
	std::ofstream rddxFile(rddx.c_str());
	int height = -1;
	int compared = -1;
	int width = 0;
	std::string line;
	while(getline(rdbxFile, line)) {
		int current = 0;
		int count = 0;
		for(auto c : line) {
			if(((c >= '1') && (c <= '8')) || (c == '@')) {
				if((c >= '1') && (c <= '8')) {
					count++;
					if(compared == -1) {
						height = 0;
						compared = current;
						rddxFile << "0&0#" << c;
					} else
						rddxFile << '\n' << height  << '&' << (current - compared)  << '#' << c;
				}
				current++;
			} else throw std::exception();
		}
		if (count > width)
			width = count;
		height++;
	}
	rddxFile << "\n~" << height << 'x' << width;
}