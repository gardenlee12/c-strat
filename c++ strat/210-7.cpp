#include <iostream>

using namespace std;
class CellPhone {
	bool on = false;
	string number;
	string model;
	string color;
public:
	void setPhone(string n, string m, string c) {
		number = n;
		model = m;
		color = c;
	}
	void setOn() {
		on = true;
	}
	void print() {
		cout << number << endl << model << endl << color << endl << boolalpha << on;
	}
};
int main() {
	CellPhone obj;

	obj.setPhone("010-1234-5678","Galaxy","Black");
	obj.setOn();
	obj.print();
}