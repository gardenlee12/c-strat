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
		cout << "영화 #" << id << endl << "영화 제목: " << title << endl << "영화 감독: " << director << endl << "영화 평점: " << rating << endl << endl;
	}
};

int Movie::count = 0;

int main() {
	Movie obj1("타이타닉","제임스 카메론", 9.5);
	Movie obj2;

	obj2.settitle("지오스톰");
	obj2.setdirector("딘 데블린");
	obj2.setrating(8.34);

	obj1.print();
	obj2.print();
}