#ifndef _ScreenObject_HH
#define _ScreenObject_HH

#include "RGBContainer.hh"
#include "Object.hh"
#include <string>

class ScreenObject : public RGBContainer, public Object {

protected:

	std::string objectType_;

public:

	ScreenObject (void);
	ScreenObject (const RGBColor& color, const uint8_t id, const std::string& objectType);
	void setObjectType (const std::string& objectType);
	virtual void setProperties (const RGBColor& color, const uint8_t id, const std::string& objectType);
	std::string getObjectType (void) const;

};

#endif