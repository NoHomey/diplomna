#include "Object.hh"

Object::Object (const long long& id) noexcept
: id_ {id} {}

auto Object::setId (const long long& id) noexcept -> void {
	id_ = id;
}

auto Object::getId (void) const noexcept -> long long {
	return id_;
}