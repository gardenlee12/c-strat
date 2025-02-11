#include <iostream>

using namespace std;
inline float calc_volume(float radius) {
	return (4.0 / 3.0 * 3.14 * pow(radius, 3));
}
int main() {
	float radius, volume = 0;
	cin >> radius;
	volume = calc_volume(radius);
	cout << volume;
}