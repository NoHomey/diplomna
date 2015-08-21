#include "Loaded.hh"

auto Loaded::append (const Position& position, const unsigned& colorCode) noexcept -> void {
	data_.push_back(std::make_tuple(position, colorCode));
}

auto Loaded::isEmpty (void) const noexcept -> bool {
	return data_.empty();
}