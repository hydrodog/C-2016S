#ifndef CIRCLE_H_
#define CIRCLE_H_

class Circle {
private:
	double x,y;
	double r;
public:
	Circle(double x, double y, double r) : x(x), y(y), r(r) {}
	void draw();
};

#endif
