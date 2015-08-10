#include "RGBColor.hh"

RGBColor::RGBColor (void) 
: red_(), green_(), blue_() {}

RGBColor::RGBColor (const Color& red, const Color& green, const Color& blue)
: red_(red), green_(green), blue_(blue) {}

RGBColor::RGBColor (const bool& red, const bool& green, const bool& blue)
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

void RGBColor::setRedColorValue (const bool& val) {
	red_.setColor(val);
}

void RGBColor::setGreenColorValue (const bool& val) {
	green_.setColor(val);
}

void RGBColor::setBlueColorValue (const bool& val) {
	blue_.setColor(val);
}

void RGBColor::setRGBColorValue (const bool& red, const bool& green, const bool& blue) {
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

bool RGBColor::getRedColorValue (void) {
	return red_.getColor();
}

bool RGBColor::getGreenColorValue (void) {
	return green_.getColor();
}

bool RGBColor::getBlueColorValue (void) {
	return blue_.getColor();
}

void RGBColor::invert (void) {
	red_.invert();
	green_.invert();
	blue_.invert();
}

void RGBColor::shiftLeft (void) {
	RGBColor rgb = *this;
	red_ = rgb.blue_;
	green_ = rgb.red_;
	blue_ = rgb.green_;
}

void RGBColor::shiftRigth (void) {
	RGBColor rgb = *this;
	red_ = rgb.green_;
	green_ = rgb.blue_;
	blue_ = rgb.red_;
}

RGBColor RGBColor::getOpositeColor (void) {
	RGBColor rgb = *this;
	rgb.invert();
	return rgb;
}