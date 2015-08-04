#include "color.hh"

Color::Color (const bool& r, const bool& g, const bool& b) 
: red_(r), green_(g), blue_(b) {}

void Color::assign (const Color& c) {
	red_ = c.red_;
	green_ = c.green_;
	blue_ = c.blue_;
}

bool Color::getRed (void) {
	return red_;
}

bool Color::getGreen (void) {
	return green_;
}

bool Color::getBlue (void) {
	return blue_;
}