#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
	int n;
	string s1,s2;
	cout << "����, ����, �� �߿� �ϳ��� �����Ͻÿ�(1, 2, 3)";
	cin >> n;
	if (n == 1) {
		s1 = "����";
	}
	else if (n == 2) {
		s1 = "����";
	}
	else if (n == 3) {
		s1 == "��";
	}

	srand(time(NULL));
	int random = 0;
	random = rand() % 3;
	if (random == 0) {
		s2 = "����";
	}
	else if (random == 1) {
		s2 = "����";
	}
	else if (random == 2) {
		s2 = "��";
	}
	cout <<"��ǻ��: " << s2 << endl;
	if (s1 == "����") {
		if (s2 == "����") {
			cout << "�����ϴ�.";
		}
		else if (s2 == "����") {
			cout << "��ǻ�� ��!";
		}
		else if (s2 == "��") {
			cout << "����� ��!";
		}
	}
	else if (s1 == "����") {
		if (s2 == "����") {
			cout << "����� ��!.";
		}
		else if (s2 == "����") {
			cout << "�����ϴ�.";
		}
		else if (s2 == "��") {
			cout << "��ǻ�� ��!";
		}
	}
	else if (s1 == "��") {
		if (s2 == "����") {
			cout << "��ǻ�� ��!.";
		}
		else if (s2 == "����") {
			cout << "����� ��!";
		}
		else if (s2 == "��") {
			cout << "�����ϴ�.";
		}
	}
}