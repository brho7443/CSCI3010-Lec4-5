# Makefile
CXX = g++ # compiler
CXXFLAGS = -std=c++17 -Wall -Werror -Wpedantic # flags

all: test

clean:
		rm *.o test

test: test.o 
		$(CXX) $(CXXFLAGS) test.o -o test

test.o: test.cpp
		$(CXX) $(CXXFLAGS) -c test.cpp

