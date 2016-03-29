#include <iostream>
#include <memory.h>
using namespace std;

class GrowArray {
private:
	int* data;
	int used;
	int len;
	void grow() {
		int* temp = data;
		data = new int[len*2];
		memcpy(data, temp, used*sizeof(int));
		delete[]temp;
	}
public:
	GrowArray() {
		data = new int[1];
		used = 0;
		len = 1;
	}
	~GrowArray() {
		delete[] data;
	}
 	GrowArray(const GrowArray& orig) : used(orig.used), len(orig.len) {
		data = new int[len];
		memcpy(data, orig.data, len * sizeof(int));
	}
  GrowArray& operator =(const GrowArray& orig) {
		if (this != &orig) {
			delete [] data;
			used = orig.used;
			len = orig.len;
			data = new int[len];
			memcpy(data, orig.data, len * sizeof(int));
		}
		return *this;
	}

	void add(int v) {
		addEnd(v);
	}

	void addEnd(int v) {
    if (used >= len)
			grow();
		data[used++] = v;		
	}

	void addStart(int v) {
    if (used >= len)
			grow();
		//		memcpy(data+1, data, used*sizeof(int));
		for (int i = used-1; i > 0; i--)
			data[i+1] = data[i];
		data[0] = v;
	}
};

int main(){
	GrowArray a;
	const int n = 1000000;
	for (int i = 0; i < n; i++)
		a.add(i);
	for (int i = 0; i < n; i++)
		a.addStart(i);
}


	
