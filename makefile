all: build, run

build:
	g++ -std=c++20 Week11-Wed-Lab.cpp -o main

run:
	./main
