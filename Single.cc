#include "Single.hh"

const uint8_t Single::max = 64;

Single::Single (void) {
    axis_ = 0;
}

Single::Single (const int8_t& val) {
    setAxis(val);
}

void Single::setAxis (const int8_t& val) {
    axis_ = val;
    validate();
}

int8_t Single::getAxis (void) const {
    return axis_;
}

void Single::validate (void) {
	if (axis_ > max)
		axis_ = max;
}

#include <iostream>
using namespace std;
 int main () {

 		Single s;
 		s.setAxis(98);
 		int o = s.getAxis();
 		cout << o << endl;

 	return 0;
 }