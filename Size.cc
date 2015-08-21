#include "Size.hh"

Size::Size (const unsigned& height, const unsigned& width) noexcept
: height_ {height}, width_ {width} {}

auto Size::setSize (const unsigned& height, const unsigned& width) noexcept -> void {
	height_ = height;
	width_ = width;
}

auto Size::getHeight (void) const noexcept -> unsigned {
	return height_;
}

auto Size::getWidth (void) const noexcept -> unsigned {
	return width_;
}
