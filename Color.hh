#ifndef _Color_HH

#define _Color_HH

class Color {

protected:

	bool color_;

public:

	Color (void);
	Color (const bool& color);
	void setColor (const bool& color);
	bool getColor (void) const;
	void invert (void);

};

#endif