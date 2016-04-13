#ifndef SHAPE_H_
#define SHAPE_H_

class Shape {
private:
	double x, y;
public:
	Shape(double x, double y) : x(x), y(y) {}
	virtual void draw() = 0;
}

#endif
