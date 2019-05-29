CC=g++
CCFLAGS= -g

%.o : %.cpp
	$(CC) -c $(CCFLAGS) $<

all: build test

# Build if necessary
build: 1-5.o 
	$(CC) -o test_problem 1-5.o

test: test_problem
	./test_problem

clean: 
	rm *.o test_problem
