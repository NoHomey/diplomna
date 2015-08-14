#include "PositionObject.hh"
#include "UniversalObject.hh"

PositionObject::PositionObject (void) 
: RGBObject() , position_() {}

PositionObject::PositionObject (const Position& position, const RGBColor& color, const long long unsigned& id)
: RGBObject(color, id), position_(position) {}

void PositionObject::setPosition (const Position& position) {
	position_ = position;
}

void PositionObject::setProperties (const Position& position, const RGBColor& color, const long long unsigned& id) {
	RGBObject::setProperties(color, id);
	setPosition(position);
}

Position PositionObject::getPosition (void) const {
	return position_;
}

UniversalObject PositionObject::toUniversalObject (const Position& position) const {
	return UniversalObject(position_.toUniversal(position), color_, id_);
}