#include <iostream>

using namespace std;

int main() {
	char c;
	int a, b;
	int result = 0;
	cout << "연산의 종류: ";
	cin >> c;
	cout << "숫자를 입력하시오: ";
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
	cout << "계산의 결과: " << result;
}