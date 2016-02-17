#include <iostream>
using namespace std;
int main() {
	for (int i = 0; i < 10; i++)
		cout << i;                  // 0123456789
	for (int i = 10; i < 10; i++)
		cout << i;                  // NOTHING
	for (int i = 10; i > 0; i++)
		cout << i;                  // 10111213...1000000001000000001
	for (int i = 10; i >=0; i--)
		cout << i;                  // 109876543210
	for (int i = 0; i < 10; i *= 2)
		cout << i                  // 000...
	for (int i = 1; i < 10; i *= 2)
		cout << i;                  // 1248
	for (int i = 100; i > 0; i /= 3 + 1)
		cout << i;                  //1002561
	for (int i = 100; i > 0; i = i / 3 + 1)
		cout << i;                  //100341252111
}






