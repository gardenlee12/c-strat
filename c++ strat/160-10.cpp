#include <iostream>
#include <random>

using namespace std;

void flip(int *coin) {
	int random = rand() % 2;
	coin[random]++;
}

int main() {
	int coin[2] = { 0 };
	srand(time(NULL));
	for (int i = 0; i < 100; i++) {
		flip(coin);
	}
	cout << "동전의 앞면: " << coin[0] << endl; 
	cout << "동전의 뒷면: " << coin[1] << endl;
}