#include <iostream>

using namespace std;
class Person
{
	string name;
	int age;
public:

	void setperson(string name, int age) {
		this->name = name;
		this->age = age;
	}

	void print() {
		cout << name << endl;
		cout << age;
	}
};

int main() {
	Person data;

	data.setperson("��ö��", 21);
	data.print();
}