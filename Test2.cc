#include "Test2.hh"
#include <iostream>
using namespace std;

const runnable_t Test2::startRoutine = &Test2::run;

runnable_t Test2::getStartRoutine (void) {
	return startRoutine;
}

Test2::Test2 (const char& c)
: c_(c) {}

void* Test2::run (void* runnable) {
	(static_cast<Test2*>(runnable))->method();	
}

void Test2::method (void) {
	while(1) {
		cout << c_  << ' ' << c_ << ' ' << c_ << endl;
	}
}