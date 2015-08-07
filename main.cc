#include "Position.hh"
#include "Axis.hh"
#include "Direction.hh"
#include "CartesianCoordinateSystem.hh"
#include <iostream>
using namespace std;

int main () {
	Movment m(1, 0);
	m.setXValue(-1);
	m.invert();
	int v =  m.getXValue();
	cout << v << endl;
	return 0;
}