#include <iostream>

using namespace std;

int main() {
	string s;

	while (true) {
		cout << "��ȭ��ȣ�� �Է��Ͻÿ�: ";
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