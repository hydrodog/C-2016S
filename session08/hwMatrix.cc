#include <iostream>
using namespace std;
class Matrix {
private:
	int rows, cols;
	double* m;
public:
	Matrix(int row, int col) {}
	Matrix(Matrix&& orig) {}
	Matrix(const Matrix& orig) {}
	~Matrix() {}
	Matrix& operator =(const Matrix& orig) {}
  double operator ()(int i, int j) const {
		return //[ LOOK AT THE DRAWING!!!]

	}
  double& operator ()(int i, int j)  {
		return //[ LOOK AT THE DRAWING!!!]

	}
	
};

int main() {
	Matrix a(2, 3);  // 0 0 0
	                 // 0 0 0
	cout << a;
	a(0,0) = 5.5;    // 5.5 0.0 0.0
		               // 0.0 0.0 0.0
	Matrix b = a;
	cout << b;
	a(0,1) = 2.5;
	b = a;
	cout << b;
	cout << b(2,2);
}
