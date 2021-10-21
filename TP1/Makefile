#api_lib = bin/model.o bin/system.o bin/flow.o

all: lib #tests
lib: basic
#tests: random-tests



basic:
	g++ src/*.cpp -o bin/basic.o -Wall

#system.o:
#	g++ -c src/System.cpp -o bin/system.o -Wall

#flow.o:
#	g++ -c src/Flow.cpp -o bin/flow.o -Wall

random-tests:
	g++ tests/random/*.cpp -o bin/random_tests.o -Wall
	
clean:
	rm -f bin/*.o bin/*.out

run-random:
	./bin/random_tests.o

run: 
	./bin/basic.o
