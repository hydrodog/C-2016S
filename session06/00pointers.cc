#include <iostream>
using namespace std;

namespace stevens {
	int a;
};
int a;
const double PI = 3.14159265358979;
//pass by reference is related to pointers, but the syntax is COMPLETELY different
//void f(int x, int y, double& r, double& theta)

int main() {
	int a,b;
	a = 5;
	b = 10;
	::a = 6;
	stevens::a = 7;
	//	int* p = a; // memory location 5?
	int* p = &a; //
	cout << a;
  *p = 19;
	cout << a;
	//	p++; // bad idea, we don't know what p is pointing to?

	int x[5] = {6, 3, 1};
	p = &x[0]; // point to the first element of the array
	*p = 8;
	p = x; // point to first element (same thing!)
  p = x + 2;
	p = &x[2]; //  x[i]  ==    *(x+i)
	for (int i = 0; i < 5; i++)
		x[i] = 0;
  for (p = x; p < &x[5]; p++)
		*p = 1;

}
	
