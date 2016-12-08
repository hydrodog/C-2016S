#include <iostream>
using namespace std;

template<typename T>
void bubbleSort(T x[], int n) {
	for (int j = 0; j < n-1; j++) {
		for (int i = 0; i < n-1; i++)
			if (x[i] > x[i+1]) {
				T temp = x[i];
				x[i] = x[i+1];
				x[i+1] = temp;
			}
	}
}


int main() {
	int a[] = {6, 5, 4, 3, 2, 1};
	// 5 4 3 2 1 6
	const int n = sizeof(a) / sizeof(int);
	bubbleSort(a, n);
	for (int i = 0; i < n ; i++)
		cout << a[i] << ' ';
	cout << '\n';
	int b[] = {9, 1, 2};
	bubbleSort(b, 3);
	float c[] = {2.5, 3.2, 1.1, 1};
	bubbleSort(c, 4);
	for (int i = 0; i < 4 ; i++)
		cout << c[i] << ' ';
}

