#ifndef _Color_HH

#define _Color_HH

class Color {

protected:

	bool red_;
	bool green_;
	bool blue_;

public:

	Color (const bool& r, const bool& g, const bool& b);
	void assign (const Color& c);
	bool getRed (void);
	bool getGreen (void);
	bool getBlue (void);

};

#endif