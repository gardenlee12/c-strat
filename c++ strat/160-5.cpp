#include <iostream>

using namespace std;

void sayHello(int n = 1) {
	for (int i = 0; i < n; i++) {
		cout << "Hello ";
	}
}
int main() {
	int n;
	cin >> n;
	sayHello();
	sayHello(n);
} 