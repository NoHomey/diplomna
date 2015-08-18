#include "PositionObject.hh"

PositionObject::PositionObject (const long long& id, const std::string& objectType, const RGBColor& rgbColor, const Position& position) noexcept
: ScreenObject(id, objectType, rgbColor), position_(position) {}

auto PositionObject::setPosition (const Position& position) noexcept -> void{
	position_ = position;
}

auto PositionObject::setProperties (const long long& id, const std::string& objectType, const RGBColor& rgbColor, const Position& position) noexcept -> void {
	ScreenObject::setProperties(id, objectType, rgbColor);
	setPosition(position);
}

auto PositionObject::getPosition (void) const noexcept -> Position {
	return position_;
}
