#include <iostream>
using namespace std;

void printGrades(const int g[], int n) {
	cout << "SIZEOF my parameter: " << sizeof(g) << '\n';
	for (int i = 0; i < n; i++)
		cout << g[i] << ' ';
	//	g[0] = -1;
}

int main() {
	int gr[5] = { 95, 80, 90, 65 }; // x[4] == 0
	cout << "SIZEOF my array: " << sizeof(gr) << "\n";	
	printGrades(gr, 5);
}


	
