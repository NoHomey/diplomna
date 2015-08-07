#include "Color.hh"

Color::Color (void)
: color_(0) {}

void Color::validate (void) {
	if(color_ & 4096)
		color_ = 4095;
}

Color::Color (const uint16_t& val) 
: color_(val) {
	validate();
}

void Color::setColorValue (const uint16_t& val) {
	color_ = val;
	validate();
}

uint16_t Color::getColorValue (void) {
	return color_;
}