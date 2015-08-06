#ifndef _Test_HH

#define _Test_HH

#include "Runnable.hh"

class Test: public Runnable {

	int i_;

protected:

	static const runnable_t startRoutine;

public:

	Test (const int& i);
	runnable_t getStartRoutine (void);
	static void* run (void* runnable);
	void method (void);

};

#endif