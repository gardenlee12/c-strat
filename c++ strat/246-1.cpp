#include <iostream>

using namespace std;
class Book {
	string title;
	string author;
public:
	Book(string t, string a) : title(t), author(a) {};
	string gettitle() {
		return title;
	}
	string getauthor() {
		return author;
	}
};
int main() {
	Book obj("Greate C++", "Bob");

	cout << obj.gettitle() << endl;
	cout << obj.getauthor();
	
}