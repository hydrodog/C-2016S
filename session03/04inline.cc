#include <iostream>
using namespace std;

#if 0
// recursive functions can't be inline!
inline int fact(int n) {
	if (n <= 1)
		return 1;
	return n * fact(n-1);
}
#endif

inline int add(int a, int b) {
	return a + b;
}

#if 0
// big (lots of code) functions, or
// functions that take a lot of time
// are not good candidates for inlining
inline double bigfunc() {
	double sum;
	for (int i = 0; i < 10000000000; i++)
		sum += i*i - (i-1)*(i-1);
	return sum*sum;
}
#endif

int main() {
	int sum = 0;
	for (int i = 0; i < 1000000000; i++)
		sum = add(sum, i);
	cout << sum << '\n';
}
