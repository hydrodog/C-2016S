all: test.exe test2.exe

test.exe: test.cc
	g++ test.cc -o test.exe
	echo "yoho!"

test2.exe: test2.cc
	g++ test2.cc -o test2.exe

#test3.exe: a.cc b.cc c.cc
#	g++ a.cc b.cc c.cc -o test2.exe

x.y:  a.b
	cat a.b >x.y

Fraction: Fraction.cc
	g++ Fraction.cc -o Fraction

Fraction2: main.o Fraction2.o
	g++ main.o Fraction2.o -o Fraction2

main.o: main.cc Fraction.hh
	g++ -c main.cc

Fraction2.o: Fraction2.cc Fraction.hh
	g++ -c Fraction2.cc





