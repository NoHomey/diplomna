#ifndef _EngineObject_HH

#define _EngineObject_HH

#include "Object.hh"
#include "Universal.hh"

class GameObject;

class EngineObject : public Object {

protected:

	Universal universal_;

public:

	EngineObject (void);
	EngineObject (const Universal& universal, const RGBColor& color, const long long unsigned& id);
	void setUniversal (const Universal& universal);
	virtual void setProperties (const Universal& universal, const RGBColor& color, const long long unsigned& id);
	Universal getUniversal (void) const;
	GameObject toGameObject (const Position& position) const;
};

#endif