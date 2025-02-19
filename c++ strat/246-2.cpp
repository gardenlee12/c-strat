#include <iostream>
#include <string>
using namespace std;
class Airplane {
	string name;
	int capacity;
	double speed;
	static int count;
	int id;
public:
	Airplane(string n, int c, double s) : name(n), capacity(c), speed(s) {
		count++;
		id = count;
	}
	
	Airplane() {
		name = " ";
		capacity = 0;
		speed = 0;
		count++;
		id = count;
	}

	string getname() {
		return name;
	}

	int getcapacity() {
		return capacity;
	}

	double getspeed() {
		return speed;
	}

	void setname(string n) {
		name = n;
	}

	void setcapacity(int c) {
		capacity = c;
	}

	void setspeed(double s) {
		speed = s;
	}

	void print() {
		cout << "ºñÇà±â#" << id << endl << "ÀÌ¸§: " << name << endl << "½Â°´¼ö: " << capacity << endl << "¼Óµµ: " << speed << "Km/h" << endl <<endl;
	}
};

int Airplane::count = 0;

int main() {
	string name1 = "º¸À× 787";
	string name2 = "¿¡¾î¹ö½º 350";
	Airplane plane1(name1, 900, 300);
	Airplane plane2;
	plane2.setname(name2);
	plane2.setcapacity(400);
	plane2.setspeed(1000);
	plane1.print();
	plane2.print();
}