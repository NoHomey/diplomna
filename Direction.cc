#include "Direction.hh"

Direction::Direction (void)
: direction_(Direction::Null) {}

Direction::Direction (const Direction::DirectionName& direction)
: direction_(direction) {}

void Direction::setDirection (const Direction::DirectionName& direction) {
     direction_ = direction;
}

Direction::DirectionName Direction::getDirection (void) const {
    return direction_;
}

void Direction::invert (void) {
    if (direction_ == Direction::Negative) 
        direction_ = Direction::Positive;
    else if (direction_ == Direction::Positive)
        direction_ = Direction::Negative;
}

int8_t Direction::convertNameToInt (const Direction::DirectionName& direction) const {
    if (direction == Direction::Null)
        return 0;
    return (direction == Direction::Positive) ? 1 : -1;
}

 Direction::DirectionName Direction::convertIntToName (const int8_t val) const {
    Direction::DirectionName direction;
    direction = (val > 0) ? Direction::Positive : Direction::Negative;
    if (!val)
        direction = Direction::Null;
    return direction;
 }