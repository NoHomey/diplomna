#include "Color.hh"

Color::Color (const bool& color) noexcept
: color_ {color} {}

auto Color::setColor (const bool& color) noexcept -> void { 
	color_ = color;
}

auto Color::getColor (void) const noexcept -> bool {
	return color_;
}

auto Color::invert (void) noexcept -> void {
	color_ = !color_;
}