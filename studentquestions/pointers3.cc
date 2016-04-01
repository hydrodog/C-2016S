#include <iostream>
using namespace std;
int main() {
	int a = 2;
	int *p = &a;
	*p = 3;

	const int b = 3;
	//p = &b; // int* = const int *
	*p = 4;
  const int* q = &b;
	cout << *q;

	

	int m[] = { 0, 1, 2, 3, 4};
	
	for (p=m; p < m+sizeof(m)/sizeof(int); p++){
		cout << p;//memory location p
		cout << " is pointing to value" << *p << endl;
	}

	

	int * x;
	const int * y;
	int* const z =0;
	const int * const w =0;
}


