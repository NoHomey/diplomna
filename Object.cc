#include "object.hh"

Object::Object (const Color& color, const int& id)
: color_(color), id_(id) {}

void Object::assign (const Object& obj) {
	color_ = obj.color_;
	id_ = obj.id_;
}

void Object::set (const Color& color, const int& id) {
	color_ = color;
	id_ = id;
}

void Object::setColor (const Color& color) {
	color_ = color;
}

void Object::setId (const int& id) {
	id_ = id;
}

Color Object::getColor (void) {
	return color_;
}

int Object::getId (void) {
	return id_;
}