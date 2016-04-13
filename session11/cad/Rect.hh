#ifndef RECT_H_
#define RECT_H_

#include "Shape"
class Rect : public Shape {
private:
	double w,h;
public:
	Rect(double x, double y, double w, double h) : Shape(x,y), w(w), h(h) {}
	void draw();

};

#endif
