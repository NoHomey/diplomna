#include "PositionObject.hh"

PositionObject::PositionObject (const long long& id, const RGBColor& rgbColor, const Position& position) noexcept
: ScreenObject {id, rgbColor}, Positionable {position} {}

auto PositionObject::setProperties (const long long& id, const RGBColor& rgbColor, const Position& position) noexcept -> void {
	ScreenObject::setProperties(id, rgbColor);
	setPosition(position);
}
