//#include "Position.hh"

#include "Axis.hh"
#include "Direction.hh"

#include <iostream>
using namespace std;

int main () {

	//Position pos (1, 2);
	//cout << pos.toInt() << endl;
	Axis<int> a (8);
	Axis<Direction> ad (-9);
	cout << ad.get().get() << endl;
	return 0;
}