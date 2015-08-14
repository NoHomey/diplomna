#include "Object.hh"

Object::Object (void)
: id_() {}

Object::Object (const long long unsigned& id)
: id_(id) {}

void Object::setId (const long long unsigned& id) {
	id_ = id;
}

long long unsigned Object::getId (void) const {
	return id_;
}