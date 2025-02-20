#include <iostream>

using namespace std;
class Movie {
	string title;
	string director;
	double rating;
	static int count;
	int id;
public:
	Movie(string t, string d, double r) : title(t), director(d), rating(r) {
		count++;
		id = count;
	}

	Movie() {
		title = " ";
		director = " ";
		rating = 0;
		count++;
		id = count;
	}

	string gettitle() {
		return title;
	}

	string getdirector() {
		return director;
	}

	double getrating() {
		return rating;
	}

	void settitle(string t) {
		title = t;
	}

	void setdirector(string d) {
		director = d;
	}

	void setrating(double r) {
		rating = r;
	}

	void print() {
		cout << "��ȭ #" << id << endl << "��ȭ ����: " << title << endl << "��ȭ ����: " << director << endl << "��ȭ ����: " << rating << endl << endl;
	}
};

int Movie::count = 0;

int main() {
	Movie obj1("Ÿ��Ÿ��","���ӽ� ī�޷�", 9.5);
	Movie obj2;

	obj2.settitle("��������");
	obj2.setdirector("�� ����");
	obj2.setrating(8.34);

	obj1.print();
	obj2.print();
}