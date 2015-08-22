#ifndef _GameObject_HH

#define _GameObject_HH

#include "Object.hh"
#include "View.hh"

class GameObject : public View, public Object {

public: 

	GameObject (void) = delete;
	GameObject (const View& view, const long long& id) noexcept;
	auto move (const Movment& movment) -> void;
	auto setAtPosition (const Position& position) -> void;



};

#endif