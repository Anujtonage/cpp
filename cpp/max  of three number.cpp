#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
class student {
public:
	int rollno;
	void setrollno(int n) {
		rollno = n;
	}
	void getrollno() {
		cout << "student to get rollno" << endl;
	}
};
class exam :public student {
public:
	int math;
	int sport;
	void setmark(int x, int y) {
		math = x;
		sport = y;
	}
	void getmark() {
		cout << "student to get rollno" << rollno<< endl;
		cout << "student math mark" << math << endl;
		cout << "student sport marks" << sport << endl;
	}
};
class result :public exam {
public:
	int res= (math + sport);
	void display() {
		cout << "value of res" << res << endl;
		cout << "the student roll no is" << rollno <<endl;
	}

};
int main() {
	result anuj;
	anuj.setmark(10, 20);
	anuj.setrollno(100);
	anuj.getrollno();
	anuj.getmark();
	anuj.display();
	system("pause");
	return 0;

}