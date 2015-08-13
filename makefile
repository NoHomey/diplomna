# !!! Self reminder
#Once cloned Run:
#[git config credential.helper store]
#[git push https://github.com/NoHomey/diplomna.git]
#Type Username & Password 
#[make git m="a message"] => auto commiting and pushing! 

all: clear clean build

main.o: main.cc

Direction.o: Direction.hh Direction.cc 

Movment.o: Movment.hh Movment.cc Direction.o

Converters.o: Converters.hh Converters.cc Direction.o Movment.o

Position.o: Position.hh Position.cc Direction.o Movment.o 

Universal.o: Universal.hh Universal.cc

build: Direction.o Movment.o Converters.o Position.o Universal.o main.o
	g++ Direction.o Movment.o Converters.o Position.o Universal.o main.o -Wall -std=c++98

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