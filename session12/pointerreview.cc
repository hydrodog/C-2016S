int main() {
	int a = 2;
	const int b = 3;
	const int* x = &b;
	int* const y = &b; // ILLEGAL: y can write to b
	delete x;


	int*a = new int[100];

	delete a; // must use []  delete a

	int*p;

	p = new int;

	delete p;

	int   *q = new int[100];  int*q;  q = new int[100];
	delete [] q;


	int* e= & a;
	delete &e;

	int* const f; // can never change, so must be initialized (compiler error)
}



	


	
