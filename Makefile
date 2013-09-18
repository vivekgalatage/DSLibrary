CC = gcc
CXX = clang++

all: List_test

List_test:
	$(CXX) -g -c src/List_test.cpp -o src/List_test.o
	$(CXX) -o src/List_test src/List_test.o
