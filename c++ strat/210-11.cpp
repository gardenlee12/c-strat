#include <iostream>

using namespace std;
class Box {
	double length;
	double width;
	double height;
public:
	double getVolume() {
		double Volume;
		Volume = length * width * height;
		return Volume;
	}
	double getLength() {
		return length;
	}
	double getWidth() {
		return width;
	}
	double getHeight() {
		return height;
	}
	void setLenght(double l) {
		length = l;
	}
	void setWidth(double w) {
		width = w;
	}
	void setHeight(double h) {
		height = h;
	}
};
int main() {
	Box obj;
	
	obj.setLenght(6);
	obj.setWidth(7);
	obj.setHeight(5);
	cout << obj.getVolume();
}