#ifndef _FileChecker_HH

#define _FileChecker_HH 

#include <fstream>
#include <string>

class FileChecker {

protected:

	std::string fileName_;

public:

	FileChecker (const std::string& fileName);
	bool exist (void) const;

};

#endif