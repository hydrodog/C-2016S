#include <iostream>
using namespace std;


class String {
private:
	char* s;
	int len;
public:
	String(const char s[]) {
		int i;
		for (i = 0; s[i] != '\0'; i++)
			;
		len = i;
		this->s = new char[len];
		for (i = 0; i < len; i++)
			this->s[i] = s[i];
		cout << "done constructor!\n";
	}
  String() {
		s = nullptr;
		len = 0;
	}
	~String() {
    delete [] this->s;
		cout << "done destructor!\n";
	}

	void operator +=(const char str[]) {
		int i;
		for (i = 0; str[i] != '\0'; i++)
			;
		char* temp = s;
		s = new char[len + i];
		for (int j = 0; j < len; j++) // copy the old memory from temp
			s[j] = temp[j];
		delete [] temp;	
		for (int j = 0; j < i; j++)  // copy the new letters from str[]
			s[len + j] = str[j];
		len += i;
	}


	friend ostream& operator <<(ostream& s, const String& str) {
		for (int i = 0; i < str.len; i++)
			s << str.s[i];
		return s;
	}

};

int main() {
	for (int i = 0; i < 5; i++) {
		String s("abcdefg");
		cout << s << '\n';
		s += "def";
		cout << s << '\n';
		String s2;
		String s3(s);
		cout << s3 << '\n';
	}
}	
