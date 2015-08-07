#include "Direction.hh"

Direction::Direction (void) 
: d_(Null) {}

Direction::Direction (const int8_t& val) {
    d_ = (val > 0) ? Positive : Negative;
    if (!val)
        d_ = Null;
}

void Direction::setDirectionValue (const int8_t& val) {
    d_ = (val > 0) ? Positive : Negative;
    if (!val)
        d_ = Null;
}

int8_t Direction::getDirectionValue (void) const {
    if (d_ == Null)
        return 0;
     return (d_ == Positive) ? 1 : -1;
}

void Direction::invert (void) {
    if (d_ == Negative) {
        d_ = Positive;
        return;
    }
    if (d_ == Positive)
        d_ = Negative;
}