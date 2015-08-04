#ifndef _Object_HH

#define _Object_HH

#include "color.hh"

class Object {

protected:

	Color color_;
	int id_;

public:

	Object (const Color& color, const int& id);
	void assign (const Object& obj);
	void set (const Color& color, const int& id);
	void setColor (const Color& color);
	void setId (const int& id);
	Color getColor (void);
	int getId (void);

};

#endif