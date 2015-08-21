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
#include "View.hh"
#include "Shader.hh"
#include "RGBColorSet.hh"

#include <iostream>
using namespace std;
int main () {

 	Loader l {"./Game/"};
 	Shader s {};
 	s.setMode(Shader::customeMode);
 	RGBColorSet set {};
 	set.setRGBColorSet({RGBColor::Green, RGBColor::Cyan});
 	s.setRGBColorSet(set);
 	View v {s.shade(l.load("Ship1"))};
 	cout << v.getHeight() << v.getWidth() << endl;

	return 0;
 }