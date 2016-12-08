#include "A.hh"

int main() {
	A a1;
	A a2(100);
	const A a3(50);
	a1.f(); // this is ok, even if f() is const
	cout << A::count;
  a3.f();
	A::g();
}


