#ifndef _RGBContainer_HH

#define _RGBContainer_HH

#include "RGBColor.hh"

class RGBContainer {

protected:

	RGBColor rgbColor_;

public:

	RGBContainer (void);
	RGBContainer (const RGBColor& rgbColor);
	void setRGBColor (const RGBColor& rgbColor);
	RGBColor getRGBColor (void) const;

};

#endif