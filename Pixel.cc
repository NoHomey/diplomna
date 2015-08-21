#include "Pixel.hh"

Pixel::Pixel (const Position& position, const RGBColor& rgbColor) noexcept
: Positionable {position}, Visible {rgbColor} {}

auto Pixel::setProperties (const Position& position, const RGBColor& rgbColor) noexcept -> void {
	setRGBColor(rgbColor);
	setPosition(position);
}
