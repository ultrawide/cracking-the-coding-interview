CC=g++
CCFLAGS= -g

%.o : %.cpp
	$(CC) -c $(CCFLAGS) $<

all: build test

# Build if necessary
build: 2-1.o 
	$(CC) -o test_problem 2-1.o

test: test_problem
	./test_problem

clean: 
	rm *.o test_problem
