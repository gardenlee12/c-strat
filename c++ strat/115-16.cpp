#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
	srand(time(NULL));
	int cash = 50;
	float win = 0, bet = 0;
	for (int i = 0; i < 1000; i++) {
		while (cash != 0 && cash != 250) {
			bet++;
			if ((double)rand() / RAND_MAX < 0.5) {
				cash++;
			}
			else {
				cash--;
			}
		}
		if (cash == 250) {
			win++;	
		}
		cash = 50;
	}
	cout << "�ʱ� �ݾ� $" << cash << endl;
	cout << "��ǥ �ݾ� $250" << endl;
	cout << "1000���� " << win << "�� �¸�" << endl;
	cout << "�̱� Ȯ�� = " << win / 10 << "%" << endl;
	cout << "��� ���� Ƚ�� = " << bet / 1000;
}