#include "Positionable.hh"

Positionable::Positionable (const Position& position) noexcept
: position_(position) {}

auto Positionable::setPosition (const Position& position) noexcept -> void{
	position_ = position;
}

auto Positionable::getPosition (void) const noexcept -> Position {
	return position_;
}
