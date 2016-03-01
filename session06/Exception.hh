#ifndef EXCEPTION_HH_
#define EXCEPTION_HH_

#include <iostream>

class Exception {
private:
  int linenum_;
  const char* message;
public:
  Exception(int linenum, const char* msg) : linenum_(linenum), message(msg) {}
	friend std::ostream& operator <<(std::ostream& s, const Exception& e) {
		s << e.message << '\n';
	}
};

#endif
