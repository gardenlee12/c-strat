#include <iostream>

using namespace std;
class Box {
	double length;
	double width;
	double hight;
	bool empty;
	static int count;
	int id;
public:
	Box(double l, double w, double h) : length(l), width(w), hight(h) {
		empty = false;
		count++;
		id = count;
	};

	Box() {
		length = 0;
		width = 0;
		hight = 0;
		empty = false;
		count++;
		id = count;
	}
	double getlength() {
		return length;
	}

	double getwidth() {
		return width;
	}

	double gethight(){
		return hight;
	}
	double getVolume() {
		return length * width * hight;
	}
	void setlength(double l) {
		length = l;
	}

	void setwidth(double w) {
		width = w;
	}

	void sethight(double h) {
		hight = h;
	}
	
	void print() {
		cout << "상자 #" << id << endl << "상자의 길이: " << length << endl << "상자의 너비: " 
			<< width << endl << "상자의 높이: " << hight << endl << "상자의 부피: " << getVolume() << endl << endl;
	}
};

int Box::count = 0;

int main() {
	Box obj1;
	Box obj2;

	obj2.setlength(3);
	obj2.setwidth(2);
	obj2.sethight(4);

	obj1.print();
	obj2.print();
}