#include "Direction.hh"
#include "CartesianCoordinateSystem.hh"
#include <iostream>
#include "Movment.hh"
#include "Converters.hh"
#include "Position.hh"
#include "Universal.hh"
using namespace std;
int main () {

 		Movment s(Converters::DirectionConverter.convertIntToName(-1), Converters::DirectionConverter.convertIntToName(-1));
 		s = Converters::MovmentConverter.convertNameToMovment(Converters::MovmentConverter.convertMovmentToName(s));
 		s.invert();
 		int i = Converters::DirectionConverter.convertNameToInt(s.getX().getDirection());
 		cout << i << endl << endl;

 		Position p(3, 6);
 		p.toUniversal(p).toPosition(p);
 		p.changeXY(s);
 		i = p.getY();
 		cout << p.isValid() << p.isAtEdge() << endl;
 		cout << i << ' ' << p.isValid() << p.isXAtEdge() << p.isYAtEdge() << endl;

 		Position p2(2, 4);
 		Universal u = p.toUniversal(p2);
 		i = u.getY();
 		cout << i << endl;

 	return 0;
 }