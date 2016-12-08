CXX=g++
OPT=-std=c++11 -g #-O3

a.exe: main.o a.o
	$(CXX) $(OPT) main.o a.o -o a.exe

main.o: main.cc
	$(CXX) $(OPT) -c main.cc

a.o: a.cc
	$(CXX) $(OPT) -c a.cc
