#include "A.hh"
#include <iostream>
using namespace std;

int A::count = 0;

A::A(int x) : x(x) {
}

void A::f() const {

}

ostream& operator <<(ostream& s, const A& a) {
  return s << a.x;
}

