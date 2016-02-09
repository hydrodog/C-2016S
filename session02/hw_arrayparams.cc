#include <iostream>
using namespace std;

void printGrades(const int g[], int n) {
	cout << "SIZEOF my parameter: " << sizeof(g) << '\n';
	for (int i = 0; i < n; i++)
		cout << g[i] << ' ';
	//	g[0] = -1;
}

double mean(const int g[], int length) {

}

void stats(const int g[], int length, double& mean, int& max, int& min) {


}

int main() {
	int gr[] = { 95, 80, 90, 65, 93 };
	cout << "SIZEOF my array: " << sizeof(gr) << "\n";
	const int n = sizeof(gr)/sizeof(int);
	printGrades(gr, n);
	cout << mean(gr, n) << '\n';
	double mean;
	int max, min;
	
	stats(gr, n, mean, max, min);

}


	
