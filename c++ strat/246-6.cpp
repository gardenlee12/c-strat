#include <iostream>

using namespace std;
class SMS {
	string sender;
	string reciver;
	string txt;
	static int count;
	int id;
public:
	SMS(string s, string r, string t) : sender(s), reciver(r), txt(t) {
		count++;
		id = count;
	}

	SMS() {
		sender = " ";
		reciver = " ";
		txt = " ";
		count++;
		id = count;
	}

	void setsender(string s) {
		sender = s;
	}

	void setreciver(string r) {
		reciver = r;
	}

	void settxt(string t) {
		txt = t;
	}

	string getsender() {
		return sender;
	}

	string getreciver() {
		return reciver;
	}

	string gettxt() {
		return txt;
	}

	void print() {
		cout << "문자메시지 #" << id << endl << "발신자: " << sender << " 수신자: " << reciver << " 내용: " << txt << endl << endl;
	}
};

int SMS::count = 0;

int main() {
	SMS obj1("010-1234-5678", "010-1234-5679", "C++ 공부는 잘되가나요?");
	SMS obj2;

	obj2.setsender("010-1234-5679");
	obj2.setreciver("010-1234-5678");
	obj2.settxt("네 5장까지는 문제 없네요.");

	obj1.print();
	obj2.print();

}