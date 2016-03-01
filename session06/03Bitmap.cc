class Bitmap {
private:
	const int w = 50, h = 20;
	int rgba[h][w];

	/*
		rgba[0][0] rgba[0][1] rgba[0][2]
		rgba[1][0]




	 */
public:
	Bitmap(int defaultVal) {
		for (int i = 0; i < h; i++)
			for (int j = 0; j < w; j++)
				rgba[i][j] = defaultVal;		
	}
	Bitmap() {
		for (int i = 0; i < h; i++)
			for (int j = 0; j < w; j++)
				rgba[i][j] = 0xFFFFFF00;
	}
	void horizLine(int x1, int x2, int y) {
	}
	void vertLine(int y1, int y2, int x) {
	}
	void line(int x1, int y1, int x2, int y2) {
	}
	void rect(int x1, int y1, int w, int h) {

	}
	void floodFill(int x, int y, int rgba) {

	}
  void findCOM(int x, int y, int& cmX, int& cmY, int& numPixels) {

	}
	
};

int main()  {
	Bitmap b;
