#ifndef _ScreenObject_HH
#define _ScreenObject_HH

#include "Object.hh"
#include "RGBColor.hh"
#include <string>

class ScreenObject : public Object {

public:

	ScreenObject (void) noexcept = default;
	ScreenObject (const long long& id, const std::string& objectType, const RGBColor& rgbColor) noexcept;
	auto setObjectType (const std::string& objectType) noexcept -> void;
	auto setRGBColor (const RGBColor& rgbColor) noexcept -> void;
	auto setProperties (const long long& id, const std::string& objectType, const RGBColor& rgbColor)  noexcept -> void;
	auto getObjectType (void) const noexcept -> std::string;
	auto getRGBColor (void) const noexcept -> RGBColor;

protected:

	std::string objectType_ {};
	RGBColor rgbColor_ {};

};

#endif