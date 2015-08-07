#ifndef _Color_HH

#define _Color_HH

#include <inttypes.h>

class Color {

protected:

	uint16_t color_;
	void validate (void);

public:

	Color (void);
	Color (const uint16_t& val);
	void setColorValue (const uint16_t& val);
	uint16_t getColorValue (void);

};

#endif