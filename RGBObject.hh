#ifndef _RGBObject_HH

#define _RGBObject_HH

#include "RGBColor.hh"
#include "Object.hh"

class RGBObject : public Object {

protected:

	RGBColor color_;

public:

	RGBObject (void);
	RGBObject (const RGBColor& color, const long long unsigned& id);
	void setRGBColor (const RGBColor& color);
	virtual void setProperties (const RGBColor& color, const long long unsigned& id);
	RGBColor getRGBColor (void) const;

};

#endif