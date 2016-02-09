#include <iostream>
using namespace std;

int main() {
	const int BUF_SIZE = 10;
	int a[BUF_SIZE]; // 100 int  = 100 * sizeof(int) = 400 bytes
	int n = 0; // auto, on the stack

	// there is a safe array type: Array<int, 100> a;
	
	//a[0] = 5;
	a[1] = -2;
	a[99] = 55;
	//	a[100] = 91251925;

	//	for (int i = 0; i < 100000; i++)
	//		a[i] = 0;

	
	int i;
	for (i = 0; i < BUF_SIZE ; i++) {
		cin >> n;
		if (n < 0)
			break;
		a[i] = n;
	}
}


	
