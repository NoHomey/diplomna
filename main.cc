//#include "Position.hh"

#include "Axis.hh"
#include "Direction.hh"
#include "CartesianCoordinateSystem.hh"

#include <iostream>
using namespace std;

int main () {

	//Position pos (1, 2);
	//cout << pos.toInt() << endl;
	/*Axis<int> a (8);
	Axis<Direction> ad (-9);
	cout << ad.get().get() << endl;*/
	CartesianCoordinateSystem<Direction> cart(2, 9);
	cart.setXY(0, 7);
	cout << cart.getX().getAxisValue().getDirectionValue() << cart.getY().getAxisValue().getDirectionValue() << endl;
	return 0;
}
