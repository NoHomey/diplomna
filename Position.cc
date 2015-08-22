#include "Position.hh"
#include "Direction.hh"
#include "Movment.hh"

const int Position::min {0};
const int Position::max {7};
 
auto Position::changeX (const Direction& direction) noexcept -> void {
 	x_ += direction.convertNameToInt(direction.getDirectionName());
 }

 auto Position::changeY (const Direction& direction) noexcept -> void {
 	y_ += direction.convertNameToInt(direction.getDirectionName());
 }


 auto Position::changeXY (const Movment& movment) noexcept -> void {
 	changeX(movment.getX());
 	changeY(movment.getY());
 }

auto Position::isXAtEdge (void) const noexcept -> bool {
	return xAtEdge_;
}

auto Position::isYAtEdge (void) const noexcept -> bool {
	return yAtEdge_;
}

auto Position::isAtEdge (void) noexcept -> bool {
	xAtEdge_ = yAtEdge_ = 0;
	xAtEdge_ = ((x_ == min) || (x_ == max));
	yAtEdge_ = ((y_ == min) || (y_ == max));
	return (xAtEdge_ || yAtEdge_);
}

auto Position::isValid (void) const noexcept -> bool {
	return ((x_ >= min) && (y_ <= max));
}

 auto Position::toInt (void) const noexcept -> int {
 	return x_ * (max + 1) + y_;
 }

 auto Position::operator += (const Position& position) noexcept -> Position& {
 	x_ += position.x_;
 	y_ += position.y_;
 	return *this;
 }