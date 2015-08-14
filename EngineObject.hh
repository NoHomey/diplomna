#ifndef _EngineObject_HH

#define _EngineObject_HH

#include "UniversalObject.hh"
#include "Object.hh"
#include <vector>
#include "RGBColor.hh"

class EngineObject : public Object {

protected:

	std::vector<UniversalObject> texture_;
	static const RGBColor::RGBColorName RGBColorName[8];




};

#endif