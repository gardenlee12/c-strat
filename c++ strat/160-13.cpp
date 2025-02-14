#include <iostream>
#include <cctype>
using namespace std;

int main() {
	string s;
	cin >> s;
	bool upper = false, lower = false, digit = false;
	for (char c : s) {
		if (isupper(c)) upper = true;
		if (islower(c)) lower = true;
		if (isdigit(c)) digit = true;
	}

	if (upper && lower && digit) {
		cout << "안전합니다.";
	}
	else {
		cout << "안전하지 않습니다.";
	}
}	