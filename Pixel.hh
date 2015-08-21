#ifndef _Pixel_HH

#define _Pixel_HH

#include "Visible.hh"
#include "Positionable.hh"

class Pixel : public Positionable, public Visible {

public:

	Pixel (void) noexcept = default;
	Pixel (const Position& position, const RGBColor& rgbColor) noexcept;
	auto setProperties (const Position& position, const RGBColor& rgbColor) noexcept -> void;

};

#endif