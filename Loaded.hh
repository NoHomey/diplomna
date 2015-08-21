#ifndef _Loaded_HH

#define _Loaded_HH

#include <vector>
#include <tuple>
#include "Position.hh"
#include "Size.hh"

class Loaded : public Size {

public:

	Loaded(void) noexcept = default;
	auto append (const Position& position, const unsigned& colorCode) noexcept -> void;
	auto getData (void) const noexcept -> std::vector<std::tuple<Position, unsigned>>;

private:

	std::vector<std::tuple<Position, unsigned>> data_ {};

};

#endif