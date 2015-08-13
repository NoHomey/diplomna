all: clear clean build

main.o: main.cc

Direction.o: Direction.hh Direction.cc 

Movment.o: Movment.hh Movment.cc Direction.o

Converters.o: Converters.hh Converters.cc Direction.o Movment.o

build: Direction.o Movment.o Converters.o main.o
	g++ Direction.o Movment.o Converters.o main.o -Wall -std=c++98

clean: 
	rm -f *.o *~ a.out

clear:
	clear

git: #{m}
	git add -A
	git commit -m m
	git push