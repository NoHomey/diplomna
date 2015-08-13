#include "Movment.hh"

Movment::Movment (void)
: CartesianCoordinateSystem() {}

Movment::Movment (const Direction& x, const Direction& y)
: CartesianCoordinateSystem(x, y) {}

void Movment::invert (void) {
    x_.invert();
    y_.invert();
}

Movment Movment::convertNameToMovment (const Movment::MovmentName& name) const {
	switch(name) {
		case Movment::DownLeft:
			return Movment(Direction::Negative, Direction::Negative);
		case Movment::Down:
			return Movment(Direction::Null, Direction::Negative);
		case Movment::DownRight:
			return Movment(Direction::Positive, Direction::Negative);
		case Movment::Left:
			return Movment(Direction::Negative, Direction::Null);
		case Movment::Null:
			return Movment(Direction::Null, Direction::Null);
		case Movment::Right:
			return Movment(Direction::Positive, Direction::Null);
		case Movment::UpLeft:
			return Movment(Direction::Negative, Direction::Positive);
		case Movment::Up:
			return Movment(Direction::Null, Direction::Positive);
		case Movment::UpRight:
			return Movment(Direction::Positive, Direction::Positive);
	}
}

 Movment::MovmentName Movment::convertMovmentToName (const Movment& movment) const {
 	Direction::DirectionName x = movment.x_.getDirection();
 	Direction::DirectionName y = movment.y_.getDirection();
 	switch(y) {
 		case Direction::Negative: {
 			switch(x) {
 				case Direction::Negative:
 					return Movment::DownLeft;
 				case Direction::Null:
 					return Movment::Down;
 				case Direction::Positive:
 					return Movment::DownRight;
 			}
 		}
 		case Direction::Null: {
 			switch(x) {
 				case Direction::Negative:
 					return Movment::Left;
 				case Direction::Null:
 					return Movment::Null;
 				case Direction::Positive:
 					return Movment::Right;
 			}
 		}
 		case Direction::Positive: {
 			switch(x) {
 				case Direction::Negative:
 					return Movment::UpLeft;
 				case Direction::Null:
 					return Movment::Up;
 				case Direction::Positive:
 					return Movment::UpRight;
 			}
 		}
 	}
 }