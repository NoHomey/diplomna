#include "Test.hh"
#include <iostream>
using namespace std;

const runnable_t Test::startRoutine = &Test::run;

runnable_t Test::getStartRoutine (void) {
	return startRoutine;
}

Test::Test (const int& i)
: i_(i) {}

void* Test::run (void* runnable) {	
	(static_cast<Test*>(runnable))->method();
}

void Test::method (void) {
	while(1) {
		cout << i_  << ' ' << i_ << ' ' << i_ << endl;
	}
}