#include "ScreenObject.hh"

ScreenObject::ScreenObject (const long long& id, const RGBColor& rgbColor) noexcept
: Object {id}, Visible {rgbColor} {}

auto ScreenObject::setProperties (const long long& id, const RGBColor& rgbColor) noexcept -> void {
	setId(id);
	setRGBColor(rgbColor);
}