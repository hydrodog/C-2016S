#include <iostream>
#include <fstream>
#include <random>
using namespace std;

int main() {
	default_random_engine generator;
	uniform_int_distribution<int> distribution(1,6);
	ofstream f("random.dat");
	const int n = 100000000;
	for (int i = 0; i < n; i++) {
		f << distribution(generator);
	}
}

		
	
