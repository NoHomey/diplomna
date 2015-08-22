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
#include "Engine.hh"
#include "GameObject.hh"

#include <iostream>
using namespace std;
int main () {

 	Loader l {"./Game/"};
 	Shader s {};
 	s.setMode(Shader::customeMode);
 	RGBColorSet set {};
 	set.setRGBColorSet({RGBColor::Black});
 	s.setRGBColorSet(set);
 	View v {s.shade(l.load("Ship1"))};
 	cout << v.getHeight() << v.getWidth() << endl;

 	cout << endl;
 	for(auto e : v.getView())  {
 		auto rgb = e.getRGBColor();
 		cout << e.getPosition().getX() << ';' << e.getPosition().getY() << '	';
 		for (int i = 0; i <  3;++i)
 			cout << rgb.getColor().getColor() << ' ';
 		cout << endl;
 	}

 	GameObject go {v, -34};
 	cout << go.getId();

 	Engine e;
 	//e.draw();


	return 0;
 }