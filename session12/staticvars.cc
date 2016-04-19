#include <iostream>
using namespace std;

int fact(int n) {
	if (n <= 1)
		return 1;
	return n* fact(n-1);
}


//Example: a pseudorandom generator
int rand() {
	static int seed = 0;
	return seed = 31097 * seed + 31079;
}


int weird() {
	static int x = 1; // the initialization only happens ONCE at the beginning
	// of the program
	x++;
	return x;
}

int main() {
	cout << fact(4);
	for (int i = 0; i < 3; i++)
		cout << weird();
}
