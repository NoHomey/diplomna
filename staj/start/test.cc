#include <iostream>
#include <wiringPi.h>
using namespace std;

int main() {
  wiringPiSetup();
  pinMode(16, INPUT);
  pullUpDnControl(16, PUD_UP);
  pinMode(15, INPUT);
  pullUpDnControl(15, PUD_UP); 
  pinMode(8, INPUT);
  pullUpDnControl(8, PUD_UP); 
  pinMode(9, INPUT);
  pullUpDnControl(9, PUD_UP);   
  while(digitalRead(8));
  cout << 1 << endl;
  return 0;
}

