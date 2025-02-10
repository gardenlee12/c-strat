#include <iostream>

using namespace std;

int main() {
	int n;
	string s[5] = { "콜라", "물", "스프라이트", "주스", "커피" };
	cout << "콜라, 물, 스프라이트, 주스, 커피 중에서 하나를 선택하세요: ";
	cin >> n;
	if (n > 5 || n < 1) {
		cout << "오류, 선택이 유효하지 않습니다.";
	}
	cout << s[n] << "를 선택하였습니다.";
}