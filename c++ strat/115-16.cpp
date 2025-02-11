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
	cout << "초기 금액 $" << cash << endl;
	cout << "목표 금액 $250" << endl;
	cout << "1000중의 " << win << "번 승리" << endl;
	cout << "이긴 확률 = " << win / 10 << "%" << endl;
	cout << "평균 베팅 횟수 = " << bet / 1000;
}