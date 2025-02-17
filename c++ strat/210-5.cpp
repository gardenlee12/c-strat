#include <iostream>

using namespace std;
class Dice {
	int face;
public:
	int roll() {
		face = (int)(rand() % 6 + 1);
		return face;
	}
};
int main() {
	Dice obj1;
	Dice obj2;

	cout << obj1.roll() << endl;
	cout << obj2.roll();
}