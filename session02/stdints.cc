/*
	author: Dov Kruger

 	cite:  I copied this off the entire class....

 */


#include <iostream>
#include <cstdint>
#include <cmath>
using namespace std;     // std::cin  std::cout  std::sin

//good style: write it in a function, make a unit, test it
//put a comment in front of it

// return true if n is not divisible by any number from 2 .. n/2
// false otherwise
bool isPrime(uint64_t n) {
	for (uint64_t i = 2; i < n/2; i++) {// try to divide by 2 ...
		if (n % i == 0)
			return false;
	}
	return true;
}
bool isPrime2(uint64_t n) {
	if (n == 2)
		return true;
	if (n % 2 == 0)
		return false;
	for (uint64_t i = 3; i <= sqrt(n); i += 2) {// try to divide by 2 ...
		if (n % i == 0)
			return false;
	}
	return true;
}


int main() {
	uint64_t n;
	cout << "Enter a number for prime test: ";
	cin >> n;
	cout << n;
	if (isPrime2(n)) {
		cout << " is prime\n";
	} else {
		cout << " is not prime\n";
	}
	//   <   >   <=    >=   ==     !=
	// NO WAY: =>  =<   <>


}
