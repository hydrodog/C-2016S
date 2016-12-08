#include <iostream>
using namespace std;

int main() {
	int*p = new int[100];
	int*q = p;
	for (int i = 0; i < 100;  i++)
		*q++ = 5;
	q = p;
	delete[] p;
	//	p = nullptr;
	cout << *q; // q is a DANGLING pointer
	int *r = new int[50];
}
