#include "Loaded.hh"

auto Loaded::add (const Position& position, const unsigned& colorCode) noexcept -> void {
	data_.push_back(std::make_tuple(position, colorCode));
}

auto Loaded::setSize (const unsigned& height, const unsigned& width) noexcept -> void {
	height_ = height;
	width_ = width;
}

auto Loaded::getHeight (void) const noexcept -> unsigned {
	return height_;
}

auto Loaded::getWidth (void) const noexcept -> unsigned {
	return width_;
}

auto Loaded::isEmpty (void) const noexcept -> bool {
	return data_.empty();
}