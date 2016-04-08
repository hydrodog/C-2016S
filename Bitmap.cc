#include <iostream>
#include <fstream>
#include <cstdint>
using namespace std;

class Bitmap {
private:
    uint32_t* bitmap;
    int w, h;
    Bitmap(const Bitmap& orig); // no copying!
    Bitmap& operator =(const Bitmap& orig); // no copying!
    uint32_t getXY(int x, int y) {
        return bitmap[y * w + x];
    }
public:
	typedef uint32_t Color;
	Bitmap(int w, int h, uint32_t rgba) { // TODO: ADD INITIALIZER LIST
		bitmap = new uint32_t[w*h];
		//TODO: fill the array with rgba
		
	}
	~Bitmap() {
		delete [] bitmap;
	}
	void hline(uint32_t x1, uint32_t x2, uint32_t y, Color rgba) {
	}
	void vline(uint32_t y1, uint32_t y2, uint32_t x, Color rgba) {
	}
	//https://en.wikipedia.org/wiki/Bresenham%27s_line_algorithm
	void line(uint32_t x1, uint32_t y1, uint32_t x2, uint32_t y2, Color rgba) {
	}
	void triangle(uint32_t x1, uint32_t y1, uint32_t x2, uint32_t y2,
								Color rgba) {
	}

	// first interpolate color on the edges
	// then scan across left to right, interpolating color
	void gouraud(uint32_t x1, uint32_t y1, Color c1,
							 uint32_t x2, uint32_t y2, Color c2,
							 uint32_t x3, uint32_t y3, Color c3) {
		
	}

	void fillRect(int x, int y, int w, int h, int rgba) {
		//TODO:
	}
	void point(int x, int y, int rgba) {
		bitmap[getXY(x,y)] = rgba;
	}
	void fillEllipse(int x, int y, int w, int h, int rgba) {
		
	}
	

	friend ostream& operator <<(ostream& s, const Bitmap& b) {
		//TODO:
		return s;
	}
};

int main() {
    Bitmap b(10, 14, 255); // w, h, default color
    b.fillRect(3, 4, 7, 2, 0);
    b.point(9,13, 1); // bottom right point
    b.fillEllipse(8, 8, 4, 4, 255*256);
    cout << b << '\n';
}
