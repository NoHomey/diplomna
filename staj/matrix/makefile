all: build

conrol.o: control.cc

driver.o: driver.cc driver.hh

build: control.o driver.o
	g++ driver.o constrol.o -o control -lcurses -lwiringPi

clean: 
	rm -f *.o *~ control a.out
