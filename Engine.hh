#ifndef _Engine_HH

#define _Engine_HH

#include "ScreenObject.hh"

class GameObject;

class Engine {

public: 

	Engine (void) noexcept { for(int i = 0; i <  1024;++i) screen_[i] = {}; };
	auto isScreenObjectDeadAt (const unsigned& n) noexcept -> bool;
	auto getScreenObjectIdAt (const unsigned& n) noexcept -> long long;
	auto draw (void) noexcept -> void;
	auto addGameObjectToScreen (const GameObject* gameObject) noexcept -> void;
	auto removeGameObjectFromScreen (const GameObject* gameObject) noexcept -> void; 

protected:

	ScreenObject screen_ [1024];
	

};

#endif