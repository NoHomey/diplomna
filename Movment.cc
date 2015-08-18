#include "Movment.hh"

auto Movment::invert (void) noexcept -> void {
    x_.invert();
    y_.invert();
}

auto Movment::convertNameToMovment (const MovmentName& movmentName) const noexcept -> Movment {
	switch(movmentName) {
		case DownLeft:
			return {Direction::Negative, Direction::Negative};
		case Down:
			return {Direction::Null, Direction::Negative};
		case DownRight:
			return {Direction::Positive, Direction::Negative};
		case Left:
			return {Direction::Negative, Direction::Null};
		case Null:
			return {Direction::Null, Direction::Null};
		case Right:
			return {Direction::Positive, Direction::Null};
		case UpLeft:
			return {Direction::Negative, Direction::Positive};
		case Up:
			return {Direction::Null, Direction::Positive};
		case UpRight:
			return {Direction::Positive, Direction::Positive};
	}
}

auto Movment::convertMovmentToName (const Movment& movment) const  noexcept -> MovmentName {
 	Direction::DirectionName x = movment.x_.getDirectionName();
 	Direction::DirectionName y = movment.y_.getDirectionName();
 	switch(y) {
 		case Direction::Negative: {
 			switch(x) {
 				case Direction::Negative:
 					return DownLeft;
 				case Direction::Null:
 					return Down;
 				case Direction::Positive:
 					return DownRight;
 			}
 		}
 		case Direction::Null: {
 			switch(x) {
 				case Direction::Negative:
 					return Left;
 				case Direction::Null:
 					return Null;
 				case Direction::Positive:
 					return Right;
 			}
 		}
 		case Direction::Positive: {
 			switch(x) {
 				case Direction::Negative:
 					return UpLeft;
 				case Direction::Null:
 					return Up;
 				case Direction::Positive:
 					return UpRight;
 			}
 		}
 	}
 }