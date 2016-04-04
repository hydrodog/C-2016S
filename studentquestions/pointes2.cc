void f(int x[]) {
	x[0] = 11;

}

void g(int* x) {
	int a = 2;
	x = &a;


}

void h(const int x[]) {

}

int main() {
	int a = 2;
	int*p = &a;
	*p = 3;

	int b = 19;
	const int* q = &a;
	cout << *q;
	a = 55;
	// can't change	*q = 99;
	q = &b;


	int* const r = &a;
	*r = 44;
	// can't change r = &b;

	const int* const w = &a;
	// can't change	*w = 11;
	// can't change w = &b;


	/*
		exercises write fucntions to do the following:
		1. fill an array with zeros
		2. fill an array with 1, 2, 3, ... n
		3. sum the aray and return the sum
		4. compute the average
		5. compute mean and variance

void stats(const int x[], int n, double& mean, double& var) {


  mean = ...;
  var = ...;
}


int main() {
  double m, v;
	int x[] = {10,20,30};
	stats(x, 3, m, v);


void stats(const int x[], int n, double* mean, double* var) {


*mean = ...;
*var = ...;
}

int main() {
  double m, v;
	int x[] = {10,20,30};
	stats(x, 3, &m, &v);
}
