#include <iostream>

using namespace std;

int main() {
	int n;
	int sum = 0;
	do {
		cout << "������ �Է��Ͻÿ�: ";
		cin >> n;
		sum += n;
	} while (n != 0);
	cout << "�հ�=" << sum;
}