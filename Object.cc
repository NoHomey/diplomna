#include "Object.hh"

Object::Object (void)
: color_(), id_() {}

Object::Object (const RGBColor& color, const long long unsigned& id)
: color_(color), id_(id) {}

void Object::setRGBColor (const RGBColor& color) {
	color_ = color;
}

void Object::setId (const long long unsigned& id) {
	id_ = id;
}

void Object::setProperties (const RGBColor& color, const long long unsigned& id) {
	setRGBColor(color);
	setId(id);
}

RGBColor Object::getRGBColor (void) const {
	return color_;
}

long long unsigned Object::getId (void) const {
	return id_;
}