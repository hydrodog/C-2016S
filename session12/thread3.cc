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

void printPrime(long from, long to) {
	for (long i = from; i <= to; i += 2)
		if (isPrime(i))
			cout << i << ' ';
}

void testPrime(long n) {
	const int size = 100;
 	for (long i = 3; i < n; i += 2*size + 4) {
		thread t1(printPrime, i, i + size);
		thread t2(printPrime, i + size + 2, i+size+size + 2);
		t1.join();
		t2.join();
	}
}
	

int main(int argc, char* argv[]) {
	long n  = atoi(argv[1]);
	testPrime(n);
}
