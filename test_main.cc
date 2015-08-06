#include "Test.hh"
#include <iostream>
#include "Thread.hh"
#include "Thread.cc"
#include <time.h>
#include <unistd.h>
#include "Test.cc"
#include "Test2.cc"
using namespace std;
int main() {

	Test test(9);
	Thread t(&test);
	Test2 test2('a');
	Thread t2(&test2);
	t.run();
	t2.run();
	t2.join();
	t.join();
	return 0;
}