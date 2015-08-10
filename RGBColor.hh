#ifndef _RGBColor_HH

#define _RGBColor_HH

#include "Color.hh"

class RGBColor {

protected:

	Color red_;
	Color green_;
	Color blue_;

public:

	RGBColor (void);
	RGBColor (const Color& red, const Color& green, const Color& blue);
	RGBColor (const bool& red, const bool& green, const bool& blue);
	void setRedColor (const Color& color);
	void setGreenColor (const Color& color);
	void setBlueColor (const Color& color);
	void setRGBColor (const Color& red, const Color& green, const Color& blue);
	void setRedColorValue (const bool& val);
	void setGreenColorValue (const bool& val);
	void setBlueColorValue (const bool& val);
	void setRGBColorValue (const bool& red, const bool& green, const bool& blue);
	Color getRedColor (void);
	Color getGreenColor (void);
	Color getBlueColor (void);
	bool getRedColorValue (void);
	bool getGreenColorValue (void);
	bool getBlueColorValue (void);
	void invert (void);
	void shiftLeft (void);
	void shiftRigth (void);
	RGBColor getOpositeColor (void);
	
};

#endif