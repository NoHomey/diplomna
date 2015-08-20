#ifndef _Loaded_HH

#define _Loaded_HH

#include <vector>
#include <tuple>
#include "Position.hh"

class Loaded {

public:

	Loaded(void) noexcept = default;
	auto add (const Position& position, const unsigned& colorCode) noexcept -> void;
	auto setSize (const unsigned& height, const unsigned& width) noexcept -> void;
	auto getHeight (void) const noexcept -> unsigned;
	auto getWidth (void) const noexcept -> unsigned;
	auto isEmpty (void) const noexcept -> bool;

private:

	std::vector<std::tuple<Position, unsigned>> data_ {};
	unsigned height_ {};
	unsigned width_ {};

};

#endif