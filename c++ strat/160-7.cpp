#include <iostream>

using namespace std;

int main() {
	string s[5];
	for (int i = 0; i < 5; i++) {
		cout << "���ڿ��� �Է��Ͻÿ�: ";
		cin >> s[i];
	}
	string longest = s[0];
	for (int i = 0; i < 5; i++) {
		if (s[i].length() > longest.length()) {
			longest = s[i];
		}
	}
	cout << longest;
}