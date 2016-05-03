#ifndef A_HH_
#define A_HH_

#include <iostream>
using namespace std;

class A {
private:
	double* p;
public:
	static int count; // --> extern int A::count;
  A();
	A(int size);
	~A();
	void f() const;
	static void g();//  g is a function in A
};

#endif
