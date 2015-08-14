#include "UniversalObject.hh"
#include "PositionObject.hh"

UniversalObject::UniversalObject (void) 
: RGBObject() , universal_() {}

UniversalObject::UniversalObject (const Universal& universal, const RGBColor& color, const long long unsigned& id)
: RGBObject(color, id), universal_(universal) {}

void UniversalObject::setUniversal (const Universal& universal) {
	universal_ = universal;
}

void UniversalObject::setProperties (const Universal& universal, const RGBColor& color, const long long unsigned& id) {
	RGBObject::setProperties(color, id);
	setUniversal(universal);
}

Universal UniversalObject::getUniversal (void) const {
	return universal_;
}

PositionObject UniversalObject::toPositionObject (const Position& position) const {
	return PositionObject(universal_.toPosition(position), color_, id_);
}