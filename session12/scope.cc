#include <iostream>
using namespace std;
int x = 1; // x is global.. available to the whole program

void f();
extern void g();

static int y;  // visible only in THIS FILE

int main() {
 	auto int x = 2; // int x; auto by default (on stack)  scope:  within main
	f();
  g();
	cout << x;
	cout << ::x; // print the global x
	if (2 < 3) {
		int x = 4;
    cout << x;
		cout << ::x; // print out global x
		//	can't get auto int x, it's SHADOWED
	}

	
}

void h() {
	cout << x;
}

void f() {
	int x = 3;
	cout << x;
	
}
