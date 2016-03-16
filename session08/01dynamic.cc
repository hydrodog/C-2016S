int main() {
	int x[5];
	int n;
	cin >> n;
	int y[n];

	char* p = malloc(1000);
	int* q = malloc(1000);
	q[0] = 22;
	q[249] = 151;


	free(p);
	free(q);

	int* r = new int[250];
  r[999] = 22; // die?
	delete [] r;
	// delete [] r; // ILLEGAL to delete same memory twice (CRASH)
	
	int* m = new int;
	delete m;

	int a = 3;
	p = &a;
	delete p; // can only delete what you new

	p = NULL;
	p = 0;
	p = nullptr;

	//	if (p != nullptr) no if needed, it's built into delete
	delete p;

	p = new int[10];
	int* q = p;
	q++;

	delete [] p;
}
