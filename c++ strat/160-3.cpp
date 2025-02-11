#include <iostream>
#include <math.h>

using namespace std;
double hypot(double a, double b) {
	return sqrt((a * a) + (b * b));
}
int main() {
	double a, b;
	double hypotenuse;
	cin >> a >> b;
	hypotenuse = hypot(a, b);
	cout << hypotenuse;
}