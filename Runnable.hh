#ifndef _Runnable_HH

#define _Runnable_HH

class Runnable {

protected:

public:

	virtual void* getName (void) = 0;
	static void* run (void* runnable);
	virtual void method (void) = 0;

};

#endif