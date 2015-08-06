#ifndef _Thread_HH

#define _Thread_HH

#include <pthread.h>
#include "Runnable.hh"

class Thread {

protected:

	pthread_t threadId_;
	Runnable* runnable_;

public:

	Thread (Runnable* runnable);
	void run (void);
	void join (void);

};

#endif