#include "Position.hh"
#include "Axis.hh"
#include "Direction.hh"
#include "CartesianCoordinateSystem.hh"
#include <iostream>
using namespace std;

int main () {
	Position pos (1, 2);
	Movment mov (-1, -1);
	cout << pos.toInt() << endl;
	pos.changeXY(mov);
	cout << pos.toInt() << endl;
	mov.invert();
	pos.changeXY(mov);
	cout << pos.toInt() << endl;
	return 0;
}