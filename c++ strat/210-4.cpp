#include <iostream>

using namespace std;
class Book {
public:
	string title;
	string author;
	void set_title(string s) {
		title = s;
	}
	void set_author(string p) {
		author = p;
	}

};
int main() {
	Book obj;

	obj.set_title("Great C++");
	obj.set_author("Bob");
	cout << obj.title << endl;
	cout << obj.author;
}