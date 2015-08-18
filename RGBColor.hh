#ifndef _RGBColor_HH

#define _RGBColor_HH

#include "Color.hh"

class RGBColor {

public:

	enum RGBColorName {Black = 0, Blue, Green, Cyan, Red, Fuchsia, Yellow, White};

	RGBColor (void) noexcept = default;
	RGBColor (const Color& red, const Color& green, const Color& blue) noexcept;
	auto setRedColor (const Color& rgbColor) noexcept -> void;
	auto setGreenColor (const Color& rgbColor) noexcept -> void;
	auto setBlueColor (const Color& rgbColor) noexcept -> void;
	auto setRGBColor (const Color& red, const Color& green, const Color& blue) noexcept -> void;
	auto getRedColor (void) const noexcept -> Color;
	auto getGreenColor (void) const noexcept -> Color;
	auto getBlueColor (void) const noexcept -> Color;
	auto getColor (void) noexcept -> Color;
	auto convertNameToRGBColor (const RGBColorName& name) const noexcept -> RGBColor;
	auto convertRGBColorToName (const RGBColor& rgbColor) const noexcept -> RGBColorName;
	auto invert (void) noexcept -> void;
	auto shiftLeft (void) noexcept -> void;
	auto shiftRight (void) noexcept -> void;
	auto getOpositeRGBColor (void) const noexcept -> RGBColor;

protected:

	Color red_ {};
	Color green_ {};
	Color blue_ {};
	int count_ {0};
	
};

#endif