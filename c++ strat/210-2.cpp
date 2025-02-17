#include <iostream>

using namespace std;
class Computer {
	string name;
	int RAM;
	double cpu_speed;
public:
	void setComputer(string n, int r, double s) {
		name = n;
		RAM = r;
		cpu_speed = s;
	}
	void print() {
		cout << name << endl << RAM << endl << cpu_speed;
	}
};
int main() {
	Computer obj;

	obj.setComputer("오피스컴퓨터", 8, 4.2);
	obj.print();
}