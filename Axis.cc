#include "Axis.hh"
#include "Direction.hh"

template <> Axis<int>::Axis (const int& val)
: axis_(val) {}

template <> void Axis<int>::setAxisValue (const int& val) {
	axis_ = val;
}

template <> int Axis<int>::getAxisValue (void) const {
	return axis_;
}

template <> Axis<Direction>::Axis (const int& val)
: axis_(val) {}

template <> void Axis<Direction>::setAxisValue (const int& val) {
	axis_.setDirectionValue(val);
}

template <> Direction Axis<Direction>::getAxisValue (void) const {
	return axis_;
}