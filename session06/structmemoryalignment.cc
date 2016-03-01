#include <iostream>
using namespace std;

class A {
private:
	char c; // 3 dead bytes go here (padding)
	int i; // 4 bytes
	char d;
	short s; // 1 byte dead space
	int j;
};

class B {
private:
	int i; // 4 bytes
	int j;
	char d;
	char c; // 3 dead bytes go here (padding)
	short s; // 1 byte dead space
};

int main() {
	cout << sizeof(A) << '\n';
	cout << sizeof(B) << '\n';
}
