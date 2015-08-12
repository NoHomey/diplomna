#ifndef _RGBColor_HH

#define _RGBColor_HH

#include "Color.hh"

namespace RGBColorName {
	enum RGBColorName {Black = 0, Blue, Green, Cyan, Red, Fuchsia, Yellow, White};
}

class RGBColor {

protected:

	Color red_;
	Color green_;
	Color blue_;

public:

	RGBColor (void);
	RGBColor (const Color& red, const Color& green, const Color& blue);
	RGBColor (const bool& red, const bool& green, const bool& blue);
	RGBColor (const RGBColorName::RGBColorName& name);
	void setRedColor (const Color& color);
	void setGreenColor (const Color& color);
	void setBlueColor (const Color& color);
	void setRGBColor (const Color& red, const Color& green, const Color& blue);
	void setRedColorValue (const bool& val);
	void setGreenColorValue (const bool& val);
	void setBlueColorValue (const bool& val);
	void setRGBColorValue (const bool& red, const bool& green, const bool& blue);
	Color getRedColor (void) const;
	Color getGreenColor (void) const;
	Color getBlueColor (void) const;
	bool getRedColorValue (void) const;
	bool getGreenColorValue (void) const;
	bool getBlueColorValue (void) const;
	RGBColor NameToColor (const RGBColorName::RGBColorName& name) const;
	RGBColorName::RGBColorName ColorToName (const RGBColor& color)
	void setRGBColorByName (const RGBColorName::RGBColorName& name);
	RGBColorName::RGBColorName getColorName (void) const;
	void invert (void);
	void shiftLeft (void);
	void shiftRigth (void);
	RGBColor getOpositeColor (void);
	
};

#endif