#include <iostream>
#include <iomanip>
using namespace std;
class Time {
	int hour;
	int minitue;
	int second;
public:
	void setTime(const int h, const int m, const int s);
	void print() const;
};

void Time::setTime(const int h, const int m, const int s) {
	hour = h;
	minitue = m;
	second = s;
}
void Time::print() const {
	cout << setfill('0') << setw(2)<<hour << ":" << setfill('0') << setw(2) << minitue << ":" << setfill('0') << setw(2) << second;
}
int main() {
	Time obj;

	obj.setTime(7, 10, 20);
	obj.print();
}