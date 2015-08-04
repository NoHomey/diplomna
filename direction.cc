#include "direction.hh"

Direction::Direction (const int& val) {
    d_ = (val > 0) ? Positive : Negative;
    if (!val)
        d_ = Null;
}

void Direction::assign (const Direction& dir) {
    d_ = dir.d_;
}

void Direction::set (const int& val) {
    d_ = (val > 0) ? Positive : Negative;
    if (!val)
        d_ = Null;
}

void Direction::change (void) {
    if (d_ == Null) {
        d_ = Positive;
        return;
    }
    d_ = (d_ == Positive) ? Negative : Null;
}

void Direction::invert (void) {
    if (d_ == Negative) {
        d_ = Positive;
        return;
    }
    if (d_ == Positive)
        d_ = Negative;
}

int Direction::toInt (void) const {
     if (d_ == Null)
        return 0;
     return (d_ == Positive) ? 1 : -1;
}