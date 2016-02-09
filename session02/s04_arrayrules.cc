#include <iostream>
using namespace std;
int f(int x) { return x*x; }
void g(int x) {
	cout << x;
	x = -19;
}

int x; // globals are zero
int y[100]; // all zeros
int main() {
	int a = 2;
	int y = f(a);
	cout << y << '\n';
	g(a);
	cout << a << '\n';
	int y[10];// random garbage
	int gr[5] = { 95, 80, 90, 65 }; // x[4] == 0
	int x[1000] = {0}; // set all elements of x to zero
}


	
