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

#include <iostream>
using namespace std;
int main () {

	Direction d;
	d.setDirectionName(Direction::Positive);
	cout << d.convertNameToInt(d.getDirectionName()) << endl;

	Movment mov;
	mov.setX(d);
	cout << d.convertNameToInt(mov.getX().getDirectionName()) << endl;

	Position pos;
	cout << pos.isXAtEdge() << endl;

	Color c;
	c.setColor(1);
	cout << c.getColor() << endl;

	Object o {9983796676768};
	cout << o.getId() << endl;

	RGBColor rgb {c, {}, {}};
	cout << rgb.convertNameToRGBColor(RGBColor::Yellow).getColor().getColor() << endl;

	ScreenObject so  {};
	so.setProperties(o.getId(), "TestObject", rgb);
	cout << so.getObjectType() << endl;

	PositionObject po {o.getId(), "TestObject2", {0, 1, 0}, {3, 4}};
	po.setProperties(432, "TestObject0", {1, 1, 0}, {2, 1});
	cout << po.getPosition().getY() << endl;

	Render r;
	try {
 			r.rend("./Game/", "Ship1");
 			r.rend("./Game/", "Ship2");
 			r.rend("./Game/", "Ship3");
 		} catch (exception& e) {
 			cout << e.what() << endl;
 		}

	return 0;
 }