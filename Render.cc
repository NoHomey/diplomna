#include "Render.hh"
#include "FileChecker.hh"
#include "FileNotExist.hh"

Render::Render (void)
: dir_("./Resources") {}

Render::Render (const std::string& dir) 
: dir_(dir) {}

void Render::rend (const std::string& name) const {
	std::string path (dir_);
	path += name + std::string(".rdbx");
	bool renderable; {
		FileChecker file(path);
		renderable = file.exist();
	}
	if (!renderable) 
		throw FileNotExist(path);
	std::ifstream rdbx(path.c_str());


}

void Render::setDir (const std::string& dir) {
	dir_ = dir;
}

std::string Render::getDir (void) const {
	return dir_;
}