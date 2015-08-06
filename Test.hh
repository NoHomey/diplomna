#ifndef _Test_HH

#define _Test_HH

#include "Runnable.hh"

class Test: public Runnable {

	int i_;

protected:

	static runnable_t name;

public:

	Test (const int& i);
	runnable_t getName (void);
	static void* run (void* runnable);
	void method (void);

};

#endif
