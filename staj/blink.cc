#include <curses.h>
#include <wiringPi.h>
#include <iostream>
using namespace std;
#define PIN 0
int main() {
  initscr();
  noecho();
  cbreak();
  wiringPiSetup();
  pinMode(PIN, OUTPUT);
  char c = 0;
  bool val = 0;
  while(1) {
    c = getch();
    if(c == 'i') val = !val;
    digitalWrite(PIN, val);
    if(c == 's') break;
  }
  endwin();
  return 0;
}
