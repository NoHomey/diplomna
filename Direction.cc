#include "Direction.hh"

Direction::Direction (void) noexcept
: directionName_{Null} {}

Direction::Direction (const DirectionName& directionName) noexcept
: directionName_{directionName} {}

auto Direction::setDirectionName (const DirectionName& directionName) noexcept -> void {
     directionName_ = directionName;
}

auto Direction::getDirectionName (void) const noexcept -> DirectionName {
    return directionName_;
}

auto Direction::invert (void) noexcept -> void {
    if (directionName_ == Negative) 
        directionName_ = Positive;
    else if (directionName_ == Positive)
        directionName_ = Negative;
}

auto Direction::convertNameToInt (const DirectionName& directionName) const noexcept -> int {
    return directionName;
}

auto Direction::convertIntToName (const int& val) const noexcept -> DirectionName {
    DirectionName directionName;
    directionName = (val > 0) ? Positive : Negative;
    if (!val)
        directionName = Null;
    return directionName;
 }