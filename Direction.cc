#include "Direction.hh"

Direction::Direction (void) {
    axis_ = direction::Null;
}

Direction::Direction (const int8_t& val) {
    axis_ = (val > 0) ? direction::Positive : direction::Negative;
    if (!val)
        axis_ = direction::Null;
}

void Direction::setAxis (const int8_t& val) {
    axis_ = (val > 0) ? direction::Positive : direction::Negative;
    if (!val)
        axis_ = direction::Null;
}

int8_t Direction::getAxis (void) const {
    if (axis_ == direction::Null)
        return 0;
     return (axis_ == direction::Positive) ? 1 : -1;
}

void Direction::invert (void) {
    if (axis_ == direction::Negative) {
        axis_ = direction::Positive;
        return;
    }
    if (axis_ == direction::Positive)
        axis_ = direction::Negative;
}