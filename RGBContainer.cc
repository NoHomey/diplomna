#include "RGBContainer.hh"

RGBContainer::RGBContainer (void)
: color_() {}

RGBContainer::RGBContainer (const RGBColor& color)
: color_(color) {}

void RGBContainer::setRGBColor (const RGBColor& color) {
	color_ = color;
}

RGBColor RGBContainer::getRGBColor (void) const {
	return color_;
}