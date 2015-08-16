#include "Object.hh"

Object::Object (void)
: id_() {}

Object::Object (const uint64_t& id)
: id_(id) {}

void Object::setId (const uint64_t& id) {
	id_ = id;
}

uint64_t Object::getId (void) const {
	return id_;
}