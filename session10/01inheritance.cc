#include <cmath>
using namespace std;

prconst int double PI = 3.14159265358979;

/* abstract class Shape
	 Represent 2d shapes that have area and perimeter and other geometric computation
 */
class Shape {
private:
	double x1, y1;
public:
	Shape(double x1, double y1) : x1(x1), y1(y1) {}
	virtual double area() const = 0; // pure virtual
	virtual double perimeter() const = 0;
};
 
//concrete class
// inheritance: A Rect IS_A Shape
class Rect : public Shape {
private:
	double w, h;
public:
	// TODO: error correction what if x2 < x1??
	Rect(double x1, double y1, double x2, double y2)
		: Shape(x1,y1), 	w(x2-x1), h(y2-y1) {}
	double area() const { return w*h; }
	double perimeter() const {
		return 2*(w+h);
	}
};

class Circle : public Shape {
private:
	double r;
public:
	Circle(double x, double y, double r) : Shape(x,y), r(r) {}
	double area() const { return PI*r*r }
	double perimeter() const {return 2 * PI * r; }
};

int main() {
	const Rect r1(100,200, 50, 25);
	cout << r1.area();

	const Circle c1(50,50, 20);
	cout << c1.area();

	Shape *x[3] = {
		new Rect(100,100,50,20),
		new Circle(50,50,120),
		new Rect(100,20, 40, 70)
	};

	for (int i = 0; i < 3; i++)
		cout << x[i]->area()
	
#if 0
	// cannot create collection of Rect and Circles because they are not the same
	Rect rects[10];
	
	vector<Rect> rects;
	rects.push_back(Rect(1,2,3,4));
	rects.push_back(Circle(1,2,3,4));
#endif
}
