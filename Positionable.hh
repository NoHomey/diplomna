#ifndef _Positionable_HH

#define _Positionable_HH

#include "Position.hh"

class Positionable {

public:

	Positionable (void) noexcept = default;
	Positionable (const Position& position) noexcept;
	auto setPosition (const Position& position) noexcept -> void;
	auto getPosition (void) const noexcept -> Position;

protected:

	Position position_ {};

};

#endif