#include <iostream>
using namespace std;

class A {
private:
  int x;
protected:
  int y;
public:
  void f();
	friend void g(); 
};

class B : public A {
  // f() is public here
	// x is invisible
  // y is protected
	friend int main();  // now main can do ANYTHING
public:
	void f() {
		cout << "I'm in B";
		A::f();
	}
};

class C : private A {
	// what was public in A (f) --> private to me
	// what was protected in A (y) --> private to me
	// x is still invisible to me
public:
	void h() {
		f();
	}
};

// alternative: C contains A
class C {
private:
	A impl;
public:
	void h() {
		impl.f();
	}
};

int main() {
	B b1;
	b1.f();
	//	b1.y = 3; //illegal, protected is only visible to the children
	// NO WAY: b1.x = 2; // B does not have access to x, so it cannot grant it
	C c1;
	c1.h();
}





