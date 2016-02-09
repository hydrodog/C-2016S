#include <iostream>
using namespace std;

int main() {
	
	int a[100]; // 100 int  = 100 * sizeof(int) = 400 bytes
	int b[500000000];  // too big for windows
	int n = 500000000; // windows hack , should work
	int b[n]; // dynamiccally allocated on heap
	int c[2*5*3]; // will calculate at compile time = 30
	cout << 365 * 24 * 60 * 60; // constant expressions
	int n;
	cin >> n;
	int d[n]; // int* p = new int[n];



	// delete [] p;

}


	
