#include <iostream>

using namespace std;

int main() {
	int n[11] = { 0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
	for (int i = 0; i < 11; i++) {
		cout << n[i] << " " << (n[i] - 32) * 5.0 / 9.0 << endl;
	}
}