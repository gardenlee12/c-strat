#include <iostream>

using namespace std;
class Employee {
	string name;
	int age;
	int salary;
public:
	void setEmployee(string n, int a, int s) {
		name = n;
		age = a;
		salary = s;
	}

	void print() {
		cout << name << endl << age << endl << salary;
	}
};
int main() {
	Employee obj;

	obj.setEmployee("±èÃ¶¼ö", 38, 2000000);
	obj.print();
}