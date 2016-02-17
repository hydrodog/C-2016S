#include <iostream>
using namespace std;

int main() {
	int a; // a = random garbage
	int b[10]; // b = 10 random integers
	// NOT C++	int[] c;

	int c[10] = {5};
	cout << c[0] << c[1] << '\n';
	int d[] = { 5, 4, 3};
	cout << sizeof(d);
	int e[3][2] = { // missing values are initialized to zero!
		{1, 5},
		{2},
	};

	int spread[64][64];
	int lotso[2][6][19][42][55][12412];

	

		
	
