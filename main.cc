#include "Direction.hh"
#include <iostream>
using namespace std;
int main () {

	Direction d;
	d.setDirectionName(Direction::Positive);
	cout << d.convertNameToInt(d.getDirectionName()) << endl;
	return 0;
 }