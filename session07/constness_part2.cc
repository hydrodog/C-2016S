#include <iostream>
using namespace std;

class A {

	void f() const {}
}
int main() {
	int a = 3;
	a = 5;
	const int b = 6;
	///b = 2; illegal, b is const
  A a1;
	a1.f();
	const A a2;
	a2.f();  // only const methods may be called on const objects
	int* p = &a;
	*p = 11; // legal, a is allowed to change
	//p = 11;  p is pointing to memory location 11, illegal except for device drivers
	//p = &b; ILLEGAL, b is constant
	*p = 11;
	const int* q = &b;
	q = &a;
	int x[10];
	int * const r = x; // r and x are both pointers that cannot change (but they can write)
	*r = 3; // write to x[0] using r
	*x = 4; // do the same for x[0]
	r[3] = 55;
	x[3] = 55;
	//	const int* const w; // makes no sense, needs to be initialized
	const int* const w = x; // can only read elements in x
}



	

	
	
