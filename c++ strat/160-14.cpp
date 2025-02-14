#include <iostream>
#include <random>

using namespace std;

int main() {
	srand(time(NULL));
	int pos1 = rand() % 5;
	int pos2 = rand() % 5;

	string s1 = { "apple" };
	string s2,s3;
	s2 = s1;
	char temp = 0;
	temp = s1[pos1];
	s1[pos1] = s1[pos2];
	s1[pos2] = temp;
	do {
		cout << s1 << "은 어떤 단어가 스크램블된 것일까요?"; 
		cin >> s3;
		if (s2 == s3) {
			cout << "축하합니다.";
		}
	} while (s3 != s2);
	

	
}