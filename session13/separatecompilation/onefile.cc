#include <iostream>
using namespace std;

extern int x;
extern int x;
extern int x;

//definition
int x; //global   default  = 0

class A {
private:
	double* p;
public:
	static int count; // --> extern int A::count;
  A() { p = nullptr; count++; }
	A(int size) { p = new double[size]; count++; }
	~A() { delete [] p; count--; }
	//A(const A& orig);
	//	A& operator =(const A& orig);
	
	void f() const { // const means "I promise not to change the object pointer to by this
		// A*this;
		// const A* this;
		cout << "f"; }
	static void g() { cout << count; }
};

int A::count = 0;


int main() {
	A a1;
	A a2(100);
	const A a3(50);
	a1.f(); // this is ok, even if f() is const
	cout << A::count;
  a3.f();
	A::g();
	A a4 = a2;//copy constructor
	a4 = a2; //operator=
}
