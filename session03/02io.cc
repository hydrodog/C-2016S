#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main() {
	srand(time(0));
	cout << "hello";
	int n;
	cin >> n;
	ofstream f("test.dat");
	f << 5 << "hello" << 5 * 2.4 << '\n';
	int a[10];
	f << a << '\n'; // prints the address of the array

	for (int i = 0; i < 10; i++)
		a[i] = rand();
	
	for (int i = 0; i < 10; i++)
		f << a[i] << ' ';
}

		
	
