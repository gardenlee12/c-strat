#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
	int n;
	string s1,s2;
	cout << "가위, 바위, 보 중에 하나를 선택하시오(1, 2, 3)";
	cin >> n;
	if (n == 1) {
		s1 = "가위";
	}
	else if (n == 2) {
		s1 = "바위";
	}
	else if (n == 3) {
		s1 == "보";
	}

	srand(time(NULL));
	int random = 0;
	random = rand() % 3;
	if (random == 0) {
		s2 = "가위";
	}
	else if (random == 1) {
		s2 = "바위";
	}
	else if (random == 2) {
		s2 = "보";
	}
	cout <<"컴퓨터: " << s2 << endl;
	if (s1 == "가위") {
		if (s2 == "가위") {
			cout << "비겼습니다.";
		}
		else if (s2 == "바위") {
			cout << "컴퓨터 승!";
		}
		else if (s2 == "보") {
			cout << "사용자 승!";
		}
	}
	else if (s1 == "바위") {
		if (s2 == "가위") {
			cout << "사용자 승!.";
		}
		else if (s2 == "바위") {
			cout << "비겼습니다.";
		}
		else if (s2 == "보") {
			cout << "컴퓨터 승!";
		}
	}
	else if (s1 == "보") {
		if (s2 == "가위") {
			cout << "컴퓨터 승!.";
		}
		else if (s2 == "바위") {
			cout << "사용자 승!";
		}
		else if (s2 == "보") {
			cout << "비겼습니다.";
		}
	}
}