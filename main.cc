#include "Direction.hh"
#include "Movment.hh"
#include "Converters.hh"
#include "Position.hh"

#include <iostream>
using namespace std;
int main () {

	Direction d;
	d.setDirectionName(Direction::Positive);
	cout << d.convertNameToInt(d.getDirectionName()) << endl;

	Movment mov;
	mov.setX(d);
	cout << d.convertNameToInt(mov.getX().getDirectionName()) << endl;

	Position pos;
	cout << pos.isXAtEdge() << endl;

	return 0;
 }