#include <iostream>

using namespace std;

class Date {
	int year;
	int month;
	int day;
public:
	Date();
	Date(int y, int m, int d) : year(y), month(m), day(d) {};
	bool isLeapyear() {
		return (year % 4 == 0 && year % 100 != 0 )||( year % 4 == 0);
	}

	void print() const {
		cout << year << "." << month << "." << day << endl;
	}

	Date nextMonth() const{
		if (month < 12) {
			return Date(year, month+1, day);
		}
		else {
			return Date(year+1, 1, day);
		}
	}
};
int main() {
	Date obj1(2017, 9, 1);
	obj1.print();
	Date next = obj1.nextMonth();
	next.print();
	cout << boolalpha << obj1.isLeapyear();
}
