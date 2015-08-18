#ifndef _Movment_HH

#define _Movment_HH

#include "Direction.hh"
#include "CartesianCoordinateSystem.hh"

class Movment: public CartesianCoordinateSystem<Direction> {

public:

	enum MovmentName {DownLeft, Down, DownRight, Left, Null, Right, UpLeft, Up, UpRight};

    auto invert (void) noexcept -> void;
    auto convertNameToMovment (const MovmentName& movmentName) const noexcept -> Movment;
    auto convertMovmentToName (const Movment& movment) const noexcept -> MovmentName;

private:
	
	using CartesianCoordinateSystem<Direction>::CartesianCoordinateSystem;

};

#endif