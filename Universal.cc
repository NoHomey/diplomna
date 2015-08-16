#include "Universal.hh"
#include "Position.hh"

const int8_t Universal::max = 21;		
const int8_t Universal::min = -Universal::max;

Universal::Universal (void)
: CartesianCoordinateSystem() {
	validate();
}

Universal::Universal (const int8_t&x, const int8_t&y) 
: CartesianCoordinateSystem(x, y) {
	validate();
}

Position Universal::toPosition (const Position& position) const {
 	return Position((position.getX() - x_),(position.getY() - y_));
 }

void Universal::validate (int8_t& axis) {	
	if (axis < min)		
		axis = min;	
	if (axis > max)		
		axis = max;	
}

void Universal::validate (void) {		
	validate(x_);
	validate(y_);
}