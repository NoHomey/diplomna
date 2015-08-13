#ifndef _RGBColor_HH

#define _RGBColor_HH

#include "Color.hh"

class RGBColor {

protected:

	Color red_;
	Color green_;
	Color blue_;

public:

	enum RGBColorName {Black = 0, Blue, Green, Cyan, Red, Fuchsia, Yellow, White};

	RGBColor (void);
	RGBColor (const Color& red, const Color& green, const Color& blue);
	void setRedColor (const Color& color);
	void setGreenColor (const Color& color);
	void setBlueColor (const Color& color);
	void setRGBColor (const Color& red, const Color& green, const Color& blue);
	Color getRedColor (void) const;
	Color getGreenColor (void) const;
	Color getBlueColor (void) const;
	RGBColor convertNameToRGBColor (const RGBColorName& name) const;
	RGBColorName convertRGBColorToName (const RGBColor& color) const;
	void invert (void);
	void shiftLeft (void);
	void shiftRight (void);
	RGBColor getOpositeRGBColor (void);
	
};

#endif