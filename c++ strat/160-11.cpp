#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	getline(cin, s);
	if ('a' < s[0] && s[0]< 'z') {
		s[0]= toupper(s[0]);
	}
	if (s.back() != '.') {
		s += ".";
	}
	cout << s;
}