#ifndef _EngineObjectGenerator_HH

#define _EngineObjectGenerator_HH

#include "Render.hh"
#include <string>

class EngineObjectGenerator {

protected:

	static const RGBColor::RGBColorName RGBColorName[8]
	Render render_;
	std::string dir_;

public:

	EngineObjectGenerator (void);
	EngineObjectGenerator (const std::string& dir);
	void generate (const std::string& name) const;
	void setDir (const std::string& dir);
	std::string getDir (void) const;


};

#endif