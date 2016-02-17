#include <iostream>
using namespace std;

void f(int x) {// pass by value (make a copy)
	cout << x << '\n';
	x = -2;
}

void g(int& x) {
	cout << x << '\n';
	x = -3;
}

int main() {
	f(3);
	int a = 9;
	f(a);
	cout << "a=" << a << '\n';
  g(a);	
	cout << "After g() a=" << a << '\n';
}

