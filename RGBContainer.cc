#include "RGBContainer.hh"

RGBContainer::RGBContainer (void)
: rgbColor_() {}

RGBContainer::RGBContainer (const RGBColor& rgbColor)
: rgbColor_(rgbColor) {}

void RGBContainer::setRGBColor (const RGBColor& rgbColor) {
	rgbColor_ = rgbColor;
}

RGBColor RGBContainer::getRGBColor (void) const {
	return rgbColor_;
}