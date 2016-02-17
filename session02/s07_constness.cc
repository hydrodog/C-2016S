#include <iostream>
using namespace std;

int main() {
	int a = 3;
	a = 5;
	const int b = 6;
	//	b = 7; const not allowed to change
	int& r = a;
	r = 2;
	cout << a << '\n'; // a is now 2!
	int& q = b;
	q = 77;
	const int& s = a;
	a = 19;
}



	
}

