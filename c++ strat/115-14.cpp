#include <iostream>

using namespace std;

int main() {
	char c;
	int a, b;
	int result = 0;
	cout << "������ ����: ";
	cin >> c;
	cout << "���ڸ� �Է��Ͻÿ�: ";
	cin >> a >> b;
	
	switch(c) {
	case '+':
		result = a + b;
		break;
	case '-':
		if (a > b) {
			result = a - b;
		}
		else 
			result = b - a;
		break;
	case '*':
		result = a * b;
		break;
	case '/':
		if (a != 0 || b != 0) {
			if (a > b)
				result = a / b;
			else
				result = b / a;
		}
		break;
	}
	cout << "����� ���: " << result;
}