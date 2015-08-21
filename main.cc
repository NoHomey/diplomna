#include "Direction.hh"
#include "Movment.hh"
#include "Converters.hh"
#include "Position.hh"
#include "Color.hh"
#include "Object.hh"
#include "RGBColor.hh"
#include "ScreenObject.hh"
#include "Render.hh"
#include "Loader.hh"
#include "Loaded.hh"

#include <iostream>
using namespace std;
int main () {

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