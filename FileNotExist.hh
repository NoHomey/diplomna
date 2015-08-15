#ifndef _FileNotExist_HH

#define _FileNotExist_HH

#include <exception>
#include <string>


class FileNotExist : public std::exception {

protected:

	std::string fileName_;

public:

	FileNotExist (const std::string& fileName);
	const char* what (void) const throw();
	~FileNotExist (void) throw();


};

#endif