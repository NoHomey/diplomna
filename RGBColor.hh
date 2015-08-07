#ifndef _RGBColor_HH

#define _RGBColor_HH

#include "Color.hh"
#include <inttypes.h>

class RGBColor {

protected:

	Color red_;
	Color green_;
	Color blue_;

public:

	RGBColor (void);
	RGBColor (const Color& red, const Color& green, const Color& blue);
	RGBColor (const uint16_t& red, const uint16_t& green, const uint16_t& blue);
	void setRedColor (const Color& color);
	void setGreenColor (const Color& color);
	void setBlueColor (const Color& color);
	void setRGBColor (const Color& red, const Color& green, const Color& blue);
	void setRedColorValue (const uint16_t& val);
	void setGreenColorValue (const uint16_t& val);
	void setBlueColorValue (const uint16_t& val);
	void setRGBColorValue (const uint16_t& red, const uint16_t& green, const uint16_t& blue);
	Color getRedColor (void);
	Color getGreenColor (void);
	Color getBlueColor (void);
	uint16_t getRedColorValue (void);
	uint16_t getGreenColorValue (void);
	uint16_t getBlueColorValue (void);
	
};

#endif