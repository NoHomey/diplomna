# !!! Self reminder
#Once cloned Run:
#[git config credential.helper store]
#[git push https://github.com/NoHomey/diplomna.git]
#Type Username & Password 
#[make git m="a message"] => auto commiting and pushing! 

C = g++ -std=c++14

all: clear clean build

main.o: main.cc
	${C} main.cc -c

Direction.o: Direction.hh Direction.cc
	${C} Direction.cc -c

Movment.o: Movment.hh Movment.cc Direction.o
	${C} Movment.cc -c

Converters.o: Converters.hh Converters.cc Direction.o Movment.o
	${C} Converters.cc -c

Position.o: Position.hh Position.cc Direction.o Movment.o
	${C} Position.cc -c

build: Direction.o Movment.o Converters.o Position.o main.o
	${C} Direction.o Movment.o Converters.o Position.o main.o -Wall

clean: 
	rm -f *.o *~ a.out message

clear:
	clear

git: message
	rm message
	git add -A
	git commit -F message.txt
	git push

message: clean
	g++ message.cc -o message
	./message ${m}