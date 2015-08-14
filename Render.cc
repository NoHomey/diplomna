#include "Render.hh"

Render::Render (void)
: dir_("./Resources") {}

Render::Render (const std::string& dir) 
: dir_(dir) {}

void Render::rend (const std::string& dir) const {

}

void Render::setDir (const std::string& dir) {
	dir_ = dir;
}

std::string Render::getDir (void) const {
	return dir_;
}