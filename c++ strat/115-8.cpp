#include <iostream>

using namespace std;

int main() {
	int n = 0;
	cout << "������ �Է��Ͻÿ�: ";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			cout << i << " ";
		}
	}
}