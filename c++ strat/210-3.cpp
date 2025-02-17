#include <iostream>

using namespace std;
class Sum {
	int n1, n2;
public:
	void init(int a, int b) {
		n1 = a;
		n2 = b;
	}
	int add() {
		return n1 + n2;
	}
};
int main() {
	Sum obj;

	obj.init(10, 20);
	cout << obj.add();
}