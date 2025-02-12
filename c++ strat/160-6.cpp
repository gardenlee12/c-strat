#include <iostream>

using namespace std;

int main() {
	string s;

	while (true) {
		cout << "전화번호를 입력하시오: ";
		cin >> s;

		if (s == "quit") {
			break;
		}
		for (char c : s) {
			if (c == '(' || c == ')') continue;
			cout << c;
		}
		cout << endl;
	}
}