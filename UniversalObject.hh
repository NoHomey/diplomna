#ifndef _UniversalObject_HH

#define _UniversalObject_HH

#include "RGBObject.hh"
#include "Universal.hh"

class PositionObject;

class UniversalObject : public RGBObject {

protected:

	Universal universal_;

public:

	UniversalObject (void);
	UniversalObject (const Universal& universal, const RGBColor& color, const long long unsigned& id);
	void setUniversal (const Universal& universal);
	virtual void setProperties (const Universal& universal, const RGBColor& color, const long long unsigned& id);
	Universal getUniversal (void) const;
	PositionObject toPositionObject (const Position& position) const;
};

#endif