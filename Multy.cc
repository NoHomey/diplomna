#include "Multy.hh"

const int8_t Multy::max = 21;
const int8_t Multy::min = -Multy::max;

Multy::Multy (void) {
    axis_ = 0;
}

Multy::Multy (const int8_t& val) {
    setAxis(val);
}

void Multy::setAxis (const int8_t& val) {
    axis_ = val;
    validate();
}

int8_t Multy::getAxis (void) const {
    return axis_;
}

void Multy::validate (void) {
	if (axis_ < min);
		axis_ = min;
	if (axis_ > max)
		axis_ = max;
}