int main() {
	int a = 3;
	int*p = &a; // p points to the address of a
	const int b = 4;
	//	p = &b; // error int* = const int *
	//	*p = 5;
	p = &a; // p points to a
	*p = 22;

	int x[] = {5, 4, 3, 2, 1};

	int sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += x[i];
	}

	int sum2 = 0;
	for (int* p = &x[0]; p < x + 5; p++)
		sum2 += *p;


	double w = 1.0;
	int y = *(int*)(&w);
}
