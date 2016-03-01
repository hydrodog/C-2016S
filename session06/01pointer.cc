#include <iostream>
using namespace std;

int main() {
	int x[10] = {0};
	int* p = x + 2;
	*p = 2;
	cout << x[0] << p[-1]  << p[0] << '\n';   // *(p-1)  *p = *(p+0)
	++p;
	p++;
	*++p = 6; // first add one int to the address of p, then write 6 to that loc
	++*p; // look at what p is pointing to and add 1
	for (int i = 0; i < 10; i++)
		cout << x[i] << ' ';
	cout << '\n';
	p = x;
	*p++ = 4;
	(*p)++;
	for (int i = 0; i < 10; i++)
		cout << x[i] << ' ';

	int a = 2;
	int b = 3;
	//	x[a++] = *p-- * x[b--]; // read that, sucker.
	
}
	
