#ifndef A_HH_
#define A_HH_

#include <iostream>
using namespace std;

class A {
private:
	int x;
	static int count; // --> extern int A::count;
public:
	A(int x = 5);
	void f() const;
	friend ostream& operator <<(ostream& s, const A& a);
};
#endif
