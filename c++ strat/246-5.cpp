#include <iostream>

using namespace std;
class Complex {
	double r;
	double i;
public:
	Complex(double r, double i) : r(r), i(i) {};

	void setr() {
		this->r = r;
	}

	void seti() {
		this->i = i;
	}

	double getr() {
		return r;
	}

	double geti() {
		return i;
	}
	void print() {
		if (i >= 0) {
			cout << r << "+" << i << "i";
		}
		else if (i < 0) {
			cout << r << "-" << abs(i) << "i";
		}
	}

	Complex add(Complex a, Complex b) {
		double sumr = 0, sumi = 0;
		sumr = a.getr() + b.getr();
		sumi = a.geti() + b.geti();
		return Complex(sumr, sumi);
	}
};
int main() {
	Complex obj1(5, 3);
	Complex obj2(3, -4);

	Complex sum = obj1.add(obj1, obj2);
	cout << "(";
	obj1.print();
	cout << ")" << " + ";
	cout << "(";
	obj2.print();
	cout << ")";
	cout << " = ";
	sum.print();
}