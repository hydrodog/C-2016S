#include <iostream>
using namespace std;

int main() {
	const double pi = 3.14159265358979;
	//pi = 4;
  //double* x = &pi;
	//*x = 4;
	double*y = (double*)&pi;
	*y = 4;
	cout << *y << ' ' << y << '\n';
	cout << pi << ' ' << &pi << '\n';
}
	
