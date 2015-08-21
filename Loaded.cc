#include "Loaded.hh"

auto Loaded::append (const Position& position, const unsigned& colorCode) noexcept -> void {
	data_.push_back(std::make_tuple(position, colorCode));
}

auto Loaded::getData (void) const noexcept -> std::vector<std::tuple<Position, unsigned>> {
	return data_;
}