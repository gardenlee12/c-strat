#include <iostream>

using namespace std;

int main() {
	string s1, s2;
	cout << "첫번째 문자열: ";
	cin >> s1;
	cout << "두번째 문자열: ";
	cin >> s2;

	if (s1 == s2) {
		cout << "두 문자열은 같습니다.";
	}
	else {
		cout << "두 문자열은 다릅니다.";
	}
}