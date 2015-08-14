#include "EngineObject.hh"
#include "GameObject.hh"

EngineObject::EngineObject (void) 
: Object() , universal_() {}

EngineObject::EngineObject (const Universal& universal, const RGBColor& color, const long long unsigned& id)
: Object(color, id), universal_(universal) {}

void EngineObject::setUniversal (const Universal& universal) {
	universal_ = universal;
}

void EngineObject::setProperties (const Universal& universal, const RGBColor& color, const long long unsigned& id) {
	Object::setProperties(color, id);
	setUniversal(universal);
}

Universal EngineObject::getUniversal (void) const {
	return universal_;
}

GameObject EngineObject::toGameObject (const Position& position) const {
	return GameObject(universal_.toPosition(position), color_, id_);
}