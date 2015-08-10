#include "Single.hh"

Single::Single (void) {
    axis_ = 0;
}

Single::Single (const int8_t& val) {
    setAxis(val);
}

void Single::setAxis (const int8_t& val) {
    axis_ = val;;
}

int8_t Single::getAxis (void) const {
    return axis_;
}