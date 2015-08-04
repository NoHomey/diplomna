#include "Axis.hh"
#include "Direction.hh"

template <> Axis<int>::Axis (const int& val)
: axis_(val) {}

template <> void Axis<int>::set (const int& val) {
	axis_ = val;
}

template <> int Axis<int>::get (void) const {
	return axis_;
}

template <> Axis<Direction>::Axis (const int& val)
: axis_(val) {}

template <> void Axis<Direction>::set (const int& val) {
	axis_.set(val);
}

template <> Direction Axis<Direction>::get (void) const {
	return axis_;
}