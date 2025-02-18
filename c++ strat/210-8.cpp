#include <iostream>

using namespace std;
class Complex {
public:
	double r;
	double i;
	void setNumber(double r, double i) {
		this->r = r;
		this->i = i;
	}
	void print() {
		if (i >= 0) {
			cout << r << "+" << i << "i" << endl;
		}
		else if (i < 0) {
			cout << r << "-" << abs(i) << "i" << endl;
		}
	}
};
int main() {
	Complex obj1, obj2;

	obj1.setNumber(5, 3);
	obj2.setNumber(3, -4);
	obj1.print();
	obj2.print();
}