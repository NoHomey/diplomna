#ifndef _Object_HH

#define _Object_HH

#include "color.hh"

class Object {

protected:

	RGBColor color_;
	int id_;

public:

	Object (const Color& color, const int& id);
	void assign (const Object& obj);
	void setRGBColor (const Color& color);
	void setId (const int& id);
	void set (const Color& color, const int& id);
	Color getColor (void);
	int getId (void);

};

#endif