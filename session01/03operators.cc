#include <iostream>
using namespace std; // std::cout --> cout

int main() {
	int a = 3 * 4; // multiplication works normally
	int b = 1000000000 * 1000000000; // but you can overflow 32 bits
	int c = 2 + 3 * 4;
	cout << a << '\n';
	cout << b << '\n';
	return 0;
}
