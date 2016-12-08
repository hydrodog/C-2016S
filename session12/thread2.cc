#include <thread>
#include <iostream>
#include <unistd.h>
#include <cstdlib>
#include <cmath>
using namespace std;

bool isPrime(long n) {
	for (int i = 3; i <= sqrt(n); i+= 2)
		if (n % i == 0)
			return false;
	return true;
}

void printPrime(long n) {
	if (isPrime(n))
		cout << n << ' ';
}

void testPrime(long n) {
 	for (long i = 3; i < n; i += 4) {
		thread t1(printPrime, i);
		thread t2(printPrime, i + 2);
		t1.join();
		t2.join();
	}
}
	

int main(int argc, char* argv[]) {
	long n  = atoi(argv[1]);
	testPrime(n);
}
