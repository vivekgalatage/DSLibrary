CC = gcc
CXX = g++

all: List.o List_test

List.o:
	$(CXX) -g -c src/List.inl -o src/List.o

List_test:
	$(CXX) -g -c src/List_test.cpp -o src/List_test.o
	$(CXX) -o src/List_test src/List_test.o
