#include "PositionObject.hh"

PositionObject::PositionObject (void) 
: ScreenObject() , position_() {}

PositionObject::PositionObject (const RGBColor& rgbColor, const uint8_t id, const std::string& objectType, const Position& position)
: ScreenObject(rgbColor, id, objectType), position_(position) {}

void PositionObject::setPosition (const Position& position) {
	position_ = position;
}

void PositionObject::setProperties (const RGBColor& rgbColor, const uint8_t id, const std::string& objectType, const Position& position) {
	ScreenObject::setProperties(rgbColor, id, objectType);
	setPosition(position);
}

Position PositionObject::getPosition (void) const {
	return position_;
}
