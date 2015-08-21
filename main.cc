#include "Direction.hh"
#include "Movment.hh"
#include "Converters.hh"
#include "Position.hh"
#include "Color.hh"
#include "Object.hh"
#include "RGBColor.hh"
#include "ScreenObject.hh"
#include "PositionObject.hh"
#include "Render.hh"
#include "Loader.hh"
#include "Loaded.hh"

#include <iostream>
using namespace std;
int main () {
	
	PositionObject p {} ;
	p.setProperties(9, Converters::RGBColorConverter.convertNameToRGBColor(RGBColor::Cyan), {2, 3});
	cout << p.getId() << p.getRGBColor().getBlueColor().getColor() << p.getPosition().getY() << endl;

	Render r;
	r.rend("./Game/", "Ship1");
 	r.rend("./Game/", "Ship2");
 
 	Loader l {"./Game/"};
 	Loaded ld {};
 	cout << ld.isEmpty() <<  endl;
 	ld = {l.load("Ship1")};
 	cout << ld.getHeight() << ld.getWidth() << endl;
 	cout << ld.isEmpty() <<  endl;

	return 0;
 }