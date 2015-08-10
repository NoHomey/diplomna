#include "Position.hh"
#include "Axis.hh"
#include "Direction.hh"
#include "CartesianCoordinateSystem.hh"
#include <iostream>
#include "Universal.hh"
using namespace std;

#include <iostream>
using namespace std;
 int main () {

 		Movment s;
 		s.setX(98);
 		s.setY(-76);
 		s.invert();
 		int o = s.getY();
 		Position p;
 		cout << o << endl;
 		p.change(s);
 		o = p.getY();
 		cout << o << endl;
 		Universal u;
 		u.toPosition(p);
 		o = u.getY();
 		cout << o << endl;

 	return 0;
 }