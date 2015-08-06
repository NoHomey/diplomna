#include "Thread.hh"

Thread::Thread (Runnable* runnable)
: runnable_(runnable) {}

void Thread::run (void) {
	pthread_create(&threadId_, NULL, runnable_->getStartRoutine(), runnable_);
}

void Thread::join (void) {
	pthread_join(threadId_, NULL);
}