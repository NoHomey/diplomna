#include "Position.hh"
#include "Axis.hh"
#include "Direction.hh"
#include "CartesianCoordinateSystem.hh"
#include <iostream>
#include "Universal.hh"
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
 		Position a = u.toPosition(p);
 		o = a.getY();
 		cout << o << endl;
 		o = a.getX();
 		cout << o << endl;
 		cout << a.isValid() << endl;
 		a.setX(8);
 		cout << a.isValid() << endl;

 	return 0;
 }