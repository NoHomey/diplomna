#include "Position.hh"
#include "Axis.hh"
#include "Direction.hh"
#include "CartesianCoordinateSystem.hh"
#include <iostream>
#include "Universal.hh"
#include "RGBColor.hh"
#include "Object.hh"
using namespace std;
int main () {

 		Movment s;
 		s.setX(98);
 		s.setY(-76);
 		s.invert();
 		int o = s.getYValue();
 		Position p;
 		cout << o << endl;
 		p.changeXY(s);
 		o = p.getYValue();
 		cout << o << endl;
 		Universal u;
 		Position a = u.toPosition(p);
 		o = a.getYValue();
 		cout << o << endl;
 		o = a.getXValue();
 		cout << o << endl;
 		cout << a.isValid() << endl;
 		a.setXValue(8);
 		cout << a.isValid() << endl;
 		Color c;
 		RGBColor rgb;
 		c.setColor(1);
 		rgb.invert();
 		rgb.setRedColor(c);
 		rgb.setGreenColorValue(0);
 		cout << rgb.getRedColorValue() << rgb.getGreenColor().getColor() << rgb.getBlueColorValue() << endl;
 		rgb.shiftLeft();
 		rgb.invert();
 		cout << rgb.getRedColorValue() << rgb.getGreenColor().getColor() << rgb.getBlueColorValue() << endl;
 		rgb.invert();
 		rgb.shiftRigth();
 		cout << rgb.getRedColorValue() << rgb.getGreenColor().getColor() << rgb.getBlueColorValue() << endl;
 		rgb = rgb.getOpositeColor();
 		cout << rgb.getRedColorValue() << rgb.getGreenColor().getColor() << rgb.getBlueColorValue() << endl;
 		Object ob;
 		ob.setProperties(rgb, 39);
 		cout << ob.getId() << ob.getRGBColor().getBlueColorValue() << endl;

 	return 0;
 }