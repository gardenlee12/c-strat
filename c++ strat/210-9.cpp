#include <iostream>

using namespace std;
class Triangle {
	int b, h;
public:
	void setTriangle(int b, int h) {
		this->b = b;
		this->h = h;
	}
	void area() {
		int calc;
		calc = b * h / 2;
		cout << b << " * " << h << " / " << "2" << " = " << calc;
	}
};
int main() {
	Triangle obj;

	obj.setTriangle(3, 4);
	obj.area();
}