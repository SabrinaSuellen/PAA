#api_lib = bin/model.o bin/system.o bin/flow.o

all: lib #tests
lib: basic 
# tests: decre-tests

# crescent-tests
# decre-tests
# random-tests


basic:
	g++ src/*.cpp -o bin/main.o -Wall
	


#system.o:
#	g++ -c src/System.cpp -o bin/system.o -Wall

#flow.o:
#	g++ -c src/Flow.cpp -o bin/flow.o -Wall
crescent-tests:
	g++ tests/crescent/*.cpp -o bin/crescent_tests.o -Wall

decre-tests:
	g++ tests/decre/*.cpp -o bin/decre_tests.o -Wall

random-tests:
	g++ tests/random/*.cpp -o bin/random_tests.o -Wall
	
clean:
	rm -f bin/*.o bin/*.out

run: 
	./bin/main.o

run-decre:
	./bin/decre_tests.o

run-crescent:
	./bin/crescent_tests.o

run-random:
	./bin/random_tests.o