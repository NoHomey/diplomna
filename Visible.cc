#include "Visible.hh"

Visible::Visible (const RGBColor& rgbColor) noexcept
: rgbColor_ {rgbColor} {}

auto Visible::setRGBColor (const RGBColor& rgbColor) noexcept -> void {
	rgbColor_ = rgbColor;
}

auto Visible::getRGBColor (void) const noexcept -> RGBColor {
	return rgbColor_;
}