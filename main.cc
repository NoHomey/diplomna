#include "Position.hh"
#include "Axis.hh"
#include "Direction.hh"
#include "CartesianCoordinateSystem.hh"
#include <iostream>
using namespace std;

int main () {
	Position pos (0, 7);
	pos.isAtEdge();
	cout << pos.isXAtEdge() << pos.isYAtEdge() << endl;
	return 0;
}