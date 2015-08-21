#ifndef _Visible_HH
#define _Visible_HH

#include "RGBColor.hh"

class Visible {

public:

	Visible (void) noexcept = default;
	Visible (const RGBColor& rgbColor) noexcept;
	auto setRGBColor (const RGBColor& rgbColor) noexcept -> void;
	auto getRGBColor (void) const noexcept -> RGBColor;

protected:

	RGBColor rgbColor_ {};

};

#endif