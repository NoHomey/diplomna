#include <curses.h>
#include <wiringPi.h>
#include <iostream>
using namespace std;
int main() {
 initscr();
  noecho();
  cbreak();
  wiringPiSetup();
  pinMode(0, OUTPUT);
  char c = 0;
  bool val = 0;
  while(1) {
   c = getch();
   if(c == 'i') val = !val;
   digitalWrite(0, val);
   if(c == 's') break;
  }
  endwin();
  return 0;
}
