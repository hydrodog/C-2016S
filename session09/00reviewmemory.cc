#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;


class String {
private:
	char* s;
	int len;
  int used;	
	void grow(int requestSize) {
		char* temp = s;
		s = new char[len = requestSize*2];
		strcpy(s, temp);
    delete[] temp;
	}
public:
  String(const char s[]) {
		int i;
		for (i = 0; s[i] != '\0'; i++)
			;
		len = i;
		this->s = new char[len+1];
		strncpy(this->s, s, len+1);
		used = len;
	}
  String() {
		s = nullptr;
		len = 0;
		used = 0;
	}
	String(int len) : len(len), used(0) {
		s = new char[len+1];
	}		
  ~String() {
		delete [] s;
	}
  String(const String& orig) : len(orig.len), used(orig.used) {
		s = new char[len+1];
		strcpy(s, orig.s);
	}
	// move constructor
	String(String&& orig) : len(orig.len), used(orig.used) {
		s = orig.s;
		orig.s = nullptr;
	}
	String& operator =(const String& orig) {
		if (this != &orig) {
			delete [] s;
			len = orig.len;
			used = orig.used;
			s = new char[len+1];
			strcpy(s, orig.s);
		}
		return *this;
	}

	bool operator ==(const String& b) {
		if (b.used != used) {
			return false;
		}
		for (int i = 0; i < used; i++)
			if (s[i] != b.s[i])
				return false;
		return true;
	}

	String& operator +=(const String& b) {
		if (used + b.used > len) {
			grow(used+b.used);
		}
		strcpy(s + used, b.s);
		used += b.used;
		return *this;
	}
	friend ostream& operator <<(ostream& s, const String& str) {
		return s << str.s;
	}
};

void f(String s) {

}

String g() {
	String a("alskdjf laskdfj asldkfj alskfj asldkfj asldkfjasl'df ");
	return a;
}

int main() {
	String s1("abc");
	String s2;
	String s3(1000); //????

	cout << s1;
	String s4 = s1; // copy constructor
	String s5(s4); // copy constructor
	f(s5);
  if (s1 == s2) {
		cout << "Same";
	}
	s1 = s1;
	s4 = s1;
	s5 = s4 = s1;
	s2 = s1 += s4;
	cout << s1;
	String s6 = g();
	cout << s6;
}
