#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cout << "몇 항까지 구할까요: ";
	cin >> n;
	vector<int> arr(n);
	arr[0] = 0;
	arr[1] = 1;
	for (int i = 2; i < n; i++) {
		arr[i] = arr[i - 2] + arr[i - 1];
	}
	for (auto& i : arr) {
		cout << i << " ";
	}
}