#include "RGBObject.hh"

RGBObject::RGBObject (void)
: color_(), Object() {}

RGBObject::RGBObject (const RGBColor& color, const long long unsigned& id)
: color_(color), Object(id) {}

void RGBObject::setRGBColor (const RGBColor& color) {
	color_ = color;
}

void RGBObject::setProperties (const RGBColor& color, const long long unsigned& id) {
	setRGBColor(color);
	setId(id);
}

RGBColor RGBObject::getRGBColor (void) const {
	return color_;
}