#include <iostream>
using namespace std;

int fibo(int n) {
	if (n <= 2)
		return 1;
	return fibo(n-1) + fibo(n-2);
}

int fiboWithMemoization(int n) {
	if (n <= 2)
		return 1;
	static int memo[200] = {0};
	if (memo[n] == 0)
		memo[n] = fiboWithMemoization(n-1) + fiboWithMemoization(n-2);
	// Thanks to Anna! This is now correct
	
	return memo[n];
}

int main() {
	cout << fibo(6);
}
