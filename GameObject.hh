#ifndef _GameObject_HH

#define _GameObject_HH

#include "Object.hh"
#include "Position.hh"

class EngineObject;

class GameObject : public Object {

protected:

	Position position_;

public:

	GameObject (void);
	GameObject (const Position& position, const RGBColor& color, const long long unsigned& id);
	void setPosition (const Position& position);
	virtual void setProperties (const Position& position, const RGBColor& color, const long long unsigned& id);
	Position getPosition (void) const;
	EngineObject toEngineObject (const Position& position) const;

};

#endif