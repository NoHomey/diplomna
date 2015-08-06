#ifndef _Runnable_HH

#define _Runnable_HH

typedef void* (* runnable_t) (void*);

class Runnable {

protected:

	static const runnable_t startRoutine;

public:

	virtual runnable_t getStartRoutine (void) = 0;
	static void* run (void* runnable);
	virtual void method (void) = 0;

};

#endif