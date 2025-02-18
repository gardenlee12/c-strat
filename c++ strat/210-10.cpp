#include <iostream>

using namespace std;
class BankAccount {
	string number;
	int balance;
public:
	void init(string, int);
	void deposit(int amount);
	void withdraw(int amount);
};
void BankAccount::init(string num, int bal) {
	number = num;
	balance = bal;
	cout << "ÇöÀç ÀÜ¾×: " << balance << endl;
}

void BankAccount::deposit(int amount) {
	cout << "after deposit(" << amount << ") ";
	balance += amount;
	cout << "ÇöÀç ÀÜ¾×: " << balance << endl;
}

void BankAccount::withdraw(int amount) {
	cout << "after withdraw(" << amount << ") ";
	balance -= amount;
	cout << "ÇöÀç ÀÜ¾×: " << balance << endl;
}
int main() {
	BankAccount obj;

	obj.init("12345", 1000000);
	obj.deposit(1000000);
	obj.withdraw(1000000);
}