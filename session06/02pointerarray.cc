#include <iostream>
using namespace std;

void bzero(void* p, int size) {
	char*q = (char*)p;
  for (int i = 0; i < size; i++)
		q[i] = 0;
}

void bzerov2(void* p, int size) {
	char* temp = (char*)p;
  for(char*q = (char*)p; q < temp+size; q++)
		*q = 0;
}

// faster version writing one 4-byte int at a time
void bzerov3(int* p, int size) {
  for(int*q = p; q < p+size; q++)
		*q = 0;
}

class A {
	double x, y, z;
public:
	A(double x, double y, double z) : x(x), y(y), z(z) {}
};

int main() {
	const int SIZE = 1024;
	int buf[SIZE];
	bzero(buf, 1024*sizeof(int));
	bzerov3(buf, 1024); // 4 times faster! writes integers
	A a1(1,2,3);
  int *p = (int*)&a1;
	for (int i = 0; i < 6; i++)
		buf[i] = *p++;
	for (int i = 0; i < 6; i++)
		cout << buf[i] << '\t';
	cout << '\n';
	p = buf;
	for (int i = 0; i < 6; i++, p++)
		cout << *p << '\t';
	cout << '\n';

}
	
