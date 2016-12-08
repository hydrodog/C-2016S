#include "A.hh"

int A::count = 0;

A::A() : p(nullptr) {
  count++;
}

A::A(int size) : p(new double[size]) {
	count++;
}

A::~A() {
	delete [] p;
	count--;
}

void A::f() const {
	cout << "f";
	//	p[0] = 99; // not valid, but only you know
	//	delete [] p; // clearly illegal
	//p = new double[1000];//ditto
}

void A::g() {
	cout << count;
}
