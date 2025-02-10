#include <iostream>

using namespace std;

int main() {
	int n = 0;
	cout << "정수를 입력하시오: ";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			cout << i << " ";
		}
	}
}