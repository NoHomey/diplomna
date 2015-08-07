#include "Axis.hh"
#include "Direction.hh"

template <> void Axis<Direction>::setAxisValue (const int8_t& val) {
	axis_.setDirectionValue(val);
}

template <> int8_t Axis<Direction>::getAxisValue (void) const {
	return axis_.getDirectionValue();
}