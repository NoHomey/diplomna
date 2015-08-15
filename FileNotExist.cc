#include "FileNotExist.hh"

FileNotExist::FileNotExist (const std::string& fileName)
: fileName_(fileName) {}

const char* FileNotExist::what (void) const throw() {
	std::string message("Can not be found!\nPlease make sure you are providing the right fileName and that fileName is represented in the provided directory.\nWith fileName: ");
	return (message + fileName_).c_str();
}

FileNotExist::~FileNotExist (void) throw() {}