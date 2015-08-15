#include "FileChecker.hh"

FileChecker::FileChecker (const std::string& fileName)
: fileName_(fileName) {}

bool FileChecker::exist (void) const {
	std::ifstream file(fileName_.c_str());
	return file;
}