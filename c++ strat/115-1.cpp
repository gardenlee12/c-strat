#include <iostream>

using namespace std;

int main() {
	string s1, s2;
	cout << "ù��° ���ڿ�: ";
	cin >> s1;
	cout << "�ι�° ���ڿ�: ";
	cin >> s2;

	if (s1 == s2) {
		cout << "�� ���ڿ��� �����ϴ�.";
	}
	else {
		cout << "�� ���ڿ��� �ٸ��ϴ�.";
	}
}