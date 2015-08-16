#ifndef _UniversalObject_HH

#define _UniversalObject_HH

#include "RGBContainer.hh"
#include "Universal.hh"

class PositionObject;

class UniversalObject : public RGBContainer {

protected:

	Universal universal_;

public:

	UniversalObject (void);
	UniversalObject (const Universal& universal, const RGBColor& color);
	void setUniversal (const Universal& universal);
	virtual void setProperties (const Universal& universal, const RGBColor& color);
	Universal getUniversal (void) const;
	PositionObject toPositionObject (const Position& position) const;
};

#endif