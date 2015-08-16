#include "Direction.hh"
#include "CartesianCoordinateSystem.hh"
#include <iostream>
#include "Movment.hh"
#include "Converters.hh"
#include "Position.hh"
#include "Universal.hh"
#include "RGBColor.hh"
#include "PositionObject.hh"
#include "UniversalObject.hh"
#include "FileNotExist.hh"
#include "Render.hh"
using namespace std;
int main () {

 		PositionObject po;
 		po.setProperties((RGBColor(Converters::RGBColorConverter.convertNameToRGBColor(RGBColor::Cyan))), 2, (std::string("Shot")), Position(2, 3));
 		
 		Render r;
 		try {
 			r.rend("./Game/", "Ship1");
 			r.rend("./Game/", "Ship2");
 			r.rend("./Game/", "Ship3");
 		} catch (FileNotExist& e) {
 			cout << e.what() << endl;
 		}

 	return 0;
 }