#include "ScreenObject.hh"

ScreenObject::ScreenObject (const long long& id, const std::string& objectType, const RGBColor& rgbColor) noexcept
: Object(), objectType_ {objectType}, rgbColor_ {rgbColor} {}

auto ScreenObject::setObjectType (const std::string& objectType) noexcept -> void {
	objectType_ = objectType;
}

auto ScreenObject::setRGBColor (const RGBColor& rgbColor) noexcept -> void {
	rgbColor_ = rgbColor;
}

auto ScreenObject::setProperties (const long long& id, const std::string& objectType, const RGBColor& rgbColor) noexcept -> void {
	setId(id);
	setObjectType(objectType);
	setRGBColor(rgbColor);

}

auto ScreenObject::getObjectType (void) const noexcept -> std::string {
	return objectType_;
}

auto ScreenObject::getRGBColor (void) const noexcept -> RGBColor {
	return rgbColor_;
}