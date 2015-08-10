#include "Color.hh"

Color::Color (void)
: color_(0) {}


Color::Color (const bool& color) 
: color_(color) {}

void Color::setColor (const bool& color)  {
	color_ = color;
}

bool Color::getColor (void) {
	return color_;
}

void Color::invert (void) {
	color_ = !color_;
}