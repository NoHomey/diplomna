#include "ScreenObject.hh"

ScreenObject::ScreenObject (void)
: RGBContainer(), Object(), objectType_() {}

ScreenObject::ScreenObject (const RGBColor& color, const uint8_t id, const std::string& objectType)
: RGBContainer(color), Object(id), objectType_(objectType) {}

void ScreenObject::setObjectType (const std::string& objectType) {
	objectType_ = objectType;
}

void ScreenObject::setProperties (const RGBColor& color, const uint8_t id, const std::string& objectType) {
	rgbColor_ = color;
	id_ = id;
	objectType_ = objectType;
}

std::string ScreenObject::getObjectType (void) const {
	return objectType_;
}