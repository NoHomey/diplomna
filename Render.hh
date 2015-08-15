#ifndef _Reader_HH

#define _Reader_HH

#include <fstream>
#include <string>

class Render {

protected:

	std::string dir_;

public:

	Render (void);
	Render (const std::string& dir);
	void rend (const std::string& name) const;
	void setDir (const std::string& dir);
	std::string getDir (void) const;

};

#endif