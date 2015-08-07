#include "RGBColor.hh"

RGBColor::RGBColor (void) 
: red_(), green_(), blue_() {}

RGBColor::RGBColor (const Color& red, const Color& green, const Color& blue)
: red_(red), green_(green), blue_(blue) {}

RGBColor::RGBColor (const uint16_t& red, const uint16_t& green, const uint16_t& blue)
: red_(red), green_(green), blue_(blue) {}

void RGBColor::setRedColor (const Color& color) {
	red_ = color;
}

void RGBColor::setGreenColor (const Color& color) {
	green_ = color;
}

void RGBColor::setBlueColor (const Color& color) {
	blue_ = color;
}

void RGBColor::setRGBColor (const Color& red, const Color& green, const Color& blue) {
	setRedColor(red);
	setGreenColor(green);
	setBlueColor(blue);
}

void RGBColor::setRedColorValue (const uint16_t& val) {
	red_.setColorValue(val);
}

void RGBColor::setGreenColorValue (const uint16_t& val) {
	green_.setColorValue(val);
}

void RGBColor::setBlueColorValue (const uint16_t& val) {
	blue_.setColorValue(val);
}

void RGBColor::setRGBColorValue (const uint16_t& red, const uint16_t& green, const uint16_t& blue) {
	setRedColorValue(red);
	setGreenColorValue(green);
	setBlueColorValue(blue);
}

Color RGBColor::getRedColor (void) {
	return red_;
}

Color RGBColor::getGreenColor (void) {
	return green_;
}

Color RGBColor::getBlueColor (void) {
	return blue_;
}

uint16_t RGBColor::getRedColorValue (void) {
	return red_.getColorValue();
}

uint16_t RGBColor::getGreenColorValue (void) {
	return green_.getColorValue();
}

uint16_t RGBColor::getBlueColorValue (void) {
	return blue_.getColorValue();
}