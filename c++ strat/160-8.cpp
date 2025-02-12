#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
	srand(time(NULL));
	int count[10] = {0};
	int max = 0;
	int most_frequent = -1;
	for (int i = 0; i < 100; i++) {
		int random = rand() % 10;
		count[random]++;
	}
	for (int i = 0; i < 10; i++) {
		if (count[i] > max) {
			max = count[i];
			most_frequent = i;
		}
	}
	cout << most_frequent;

}