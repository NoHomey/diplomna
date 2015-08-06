#ifndef _Runnable_HH

#define _Runnable_HH

typedef void* (* runnable_t) (void*);

class Runnable {

protected:

	static runnable_t name;

public:

	virtual runnable_t getName (void) = 0;
	static void* run (void* runnable);
	virtual void method (void) = 0;

};
#endif