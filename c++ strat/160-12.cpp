#include <iostream>
#include <string>
using namespace std;

int main() {
	int count[256] = { 0 };
	string s;
	getline(cin, s);

	for (int i = 0; i < s.size(); i++) {
		count[s[i]]++;
	}
	for (int i = 0; i < 256; i++) {
		if (count[i] > 0) {
			cout << (char)i<<" : " << count[i] << endl;
		}
	}
}