#ifndef _Object_HH

#define _Object_HH

#include "RGBColor.hh"

class Object {

protected:

	RGBColor color_;
	long long unsigned id_;

public:

	Object (void);
	Object (const RGBColor& color, const long long unsigned& id);
	void setRGBColor (const RGBColor& color);
	void setId (const long long unsigned& id);
	void setProperties (const RGBColor& color, const long long unsigned& id);
	RGBColor getRGBColor (void) const;
	long long unsigned getId (void) const;

};

#endif