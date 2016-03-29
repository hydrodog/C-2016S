#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> a;
	const int n = 1000000;
	for (int i = 0; i < n; i++)
		a.push_back(i);

	cout << sizeof(long) << '\n';
	long long sum = 0;
	for (int i = 0; i < n; i++)
		sum += a[i];
	cout << sum << '\n';

	double sum2 = 0;
	for (vector<int>::iterator j = a.begin(); j != a.end(); ++j)
		sum2 += *j;
	cout << sum2 << '\n';

	double sum3 = 0;
	for (auto x : a) {
		sum3 += x;
	}
	cout << sum3 << '\n';
	
}
