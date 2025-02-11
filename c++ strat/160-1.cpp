#include <iostream>

using namespace std;

void Maxnum(int x, int y, int z) {
	int maxvalue = x;

	if (y > maxvalue) maxvalue = y;
	if (z > maxvalue) maxvalue = z;
	cout << "가장 큰 정수는 " << maxvalue;
}

int main() {
	int x, y, z;

	cin >> x >> y >> z;
	Maxnum(x, y, z);
}