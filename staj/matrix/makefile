all: build

conrol.o: control.cc

driver.o: driver.cc driver.hh

shot.o: shot.cc shot.hh

bomb.o: bomb.cc bomb.hh

build: control.o driver.o shot.o bomb.o
	g++ driver.o control.o shot.o bomb.o -Wall -o control -lwiringPi -pthread

clean: 
	rm -f *.o *~ control a.out

run: build
	sudo ./control
