#include <iostream>
using namespace std;

class image {
public:
	image()
	{

	}

	image(int x, int y, int r, int g, int b){
		this->x = x;
		this->y = y;
		this->r = r;
		this->g = g;
		this->b = b;
	}

private:
	int x, y, r, g, b;
};


int main() {
	image* Image = new image[12];
	Image[0] = image(0, 0, 165, 55, 128);
	Image[1] = image(0, 1, 133, 28, 182);
	Image[2] = image(0, 2, 115, 136, 63);
	Image[3] = image(0, 0, 0, 0, 0);
	Image[4] = image(0, 0, 0, 0, 0);
	Image[5] = image(0, 0, 0, 0, 0);
	Image[6] = image(0, 0, 0, 0, 0);
	Image[7] = image(0, 0, 0, 0, 0);
	Image[8] = image(0, 0, 0, 0, 0);
	Image[9] = image(0, 0, 0, 0, 0);
	Image[10] = image(0, 0, 0, 0, 0);
	Image[11] = image(0, 0, 0, 0, 0);	
}