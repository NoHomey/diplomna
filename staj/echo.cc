#include <iostream>
#include <wiringPi.h>
using namespace std;
#define TRIG 22
#define ECHO 23

void setup() {
         wiringPiSetup();
         pinMode(TRIG, OUTPUT);
         pinMode(ECHO, INPUT);
         digitalWrite(TRIG, LOW);
         delay(30);
}
 
int distance() {
         digitalWrite(TRIG, HIGH);
         delayMicroseconds(20);
         digitalWrite(TRIG, LOW);
         while(!digitalRead(ECHO));
         long startTime = micros();
         while(digitalRead(ECHO));
         long travelTime = micros() - startTime;
         int distance = travelTime / 58;
         return distance;
}
 
int main( void ) {
         setup();
         while(1) {
                 cout << "Distance:" << distance() << "cm" << endl;
                 delay(200);
         }
         return 0;
}
