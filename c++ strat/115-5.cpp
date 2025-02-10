#include <iostream>

using namespace std;

int main() {
	int n;
	int sum = 0;
	do {
		cout << "정수를 입력하시오: ";
		cin >> n;
		sum += n;
	} while (n != 0);
	cout << "합계=" << sum;
}