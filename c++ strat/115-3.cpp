#include <iostream>

using namespace std;

int main() {
	int days[12] = { 31, 29, 31, 30, 31, 30, 31,31, 30, 31, 30, 31 };
	for (int i = 1; i <= 12; i++) {
		cout << i << "���� " << days[i-1] << "�ϱ��� �ֽ��ϴ�."<<endl;
	}
}