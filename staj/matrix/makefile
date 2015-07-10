all: build

conrol.o: control.cc

driver.o: driver.cc driver.hh

shot.o: shot.cc shot.cc

build: control.o driver.o shot.o
	g++ driver.o control.o shot.o -Wall -o control -lcurses -lwiringPi -pthread

clean: 
	rm -f *.o *~ control a.out
run: build
	sudo ./control
