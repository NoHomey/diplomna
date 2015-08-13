#include "Direction.hh"
#include "CartesianCoordinateSystem.hh"
#include <iostream>
#include "Movment.hh"
#include "Converters.hh"
using namespace std;
int main () {

 		Movment s(Converters::DirectionConverter.convertIntToName(-1), Converters::DirectionConverter.convertIntToName(-1));
 		s = Converters::MovmentConverter.convertNameToMovment(Converters::MovmentConverter.convertMovmentToName(s));
 		s.invert();
 		int i = Converters::DirectionConverter.convertNameToInt(s.getX().getDirection());
 		cout << i << endl;

 	return 0;
 }