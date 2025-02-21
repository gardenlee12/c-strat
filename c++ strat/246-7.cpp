#include <iostream>

using namespace std;
class Charactor {
	int x, y;
	double HP;
	static int count;
	int id;
public:
	Charactor(int px, int py, double pHP) : x(px), y(py), HP(pHP) {
		count++;
		id = count;
		cout << "캐릭터 #" << id << endl;
	}

	Charactor() {
		x = 0;
		y = 0;
		HP = 0;
		count++;
		id = count;
		cout << "캐릭터 #" << id << endl;
	}

	void setx(int px) {
		x = px;
	}

	void sety(int py) {
		y = py;
	}

	void setHP(double pHP) {
		HP = pHP;
	}

	void print() {
		cout << "x: " << x << " y: " << y << " HP: " << HP << endl;;
	}
};

int Charactor::count = 0;

int main() {
	int px = 0;
	Charactor obj1(0,0,100);

	for (int i = 0; i < 10; i++) {
		px += 10;
		obj1.setx(px);
		obj1.print();
	}
	
}