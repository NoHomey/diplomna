#include "GameObject.hh"
#include "EngineObject.hh"

GameObject::GameObject (void) 
: Object() , position_() {}

GameObject::GameObject (const Position& position, const RGBColor& color, const long long unsigned& id)
: Object(color, id), position_(position) {}

void GameObject::setPosition (const Position& position) {
	position_ = position;
}

void GameObject::setProperties (const Position& position, const RGBColor& color, const long long unsigned& id) {
	Object::setProperties(color, id);
	setPosition(position);
}

Position GameObject::getPosition (void) const {
	return position_;
}

EngineObject GameObject::toEngineObject (const Position& position) const {
	return EngineObject(position_.toUniversal(position), color_, id_);
}