#ifndef _RGBContainer_HH

#define _RGBContainer_HH

#include "RGBColor.hh"

class RGBContainer {

protected:

	RGBColor color_;

public:

	RGBContainer (void);
	RGBContainer (const RGBColor& color);
	void setRGBColor (const RGBColor& color);
	RGBColor getRGBColor (void) const;

};

#endif