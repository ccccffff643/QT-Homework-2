#include <iostream>
#include <string>
#include <iomanip>
using std::string;
using std::cout;
using std::cin;
using std::getline;
using std::left;
using std::setfill;
using std::setw;

class Course {

private:
	string code;
	string name;
	int credit;
	double score;

public:
	Course(string code, string name, int credit);
	Course(const Course& course);
	Course();
	void input();
	void output();
	double getScore();
	int getCredit();
};

class Student {

private:
	string id;
	string name;
	Course course[100];
public:
	Student();
	void input();
	void output();
	int getTotalCredit();
	double getGPA();
};

Course::Course()
:	code(string()),
	name(string()),
	credit(-1),
	score(-1)
{


}

Course::Course(string code, string name, int credit) 
:	code(code),
	name(name),
	credit(credit),
	score(-1)
{

}

Course::Course(const Course& course) {

	this->code = course.code;
	this->name = course.name;
	this->credit = course.credit;
	this->score = course.score;
}

void Course::input() {

	cout << "Code: ";
	getline(cin, this->code);
	cout << "Name: ";
	getline(cin, this->name);

	cout << "Credit: ";
	cin >> this->credit;
	cout << "Score: ";
	cin >> this->score;
	cin.ignore();
}

void Course::output() {

	cout << left << setfill(' ')
		 << setw(6) << this->code
		 << setw(27) << this->name
		 << setw(13) << this->credit
		 << '\n';
}

double Course::getScore() {

	return this->score;
}

int Course::getCredit() {

	return this->credit;
}

Student::Student()
:	id(string()),
	name(string())
{

}
void Student::input() {

	cout << "ID: ";
	cin >> this->id;
	cin.ignore();
	cout << "Name: ";
	getline(cin, this->name);
	cout << '\n';
	int n;
	cout << "Number of course: ";
	cin >> n;
	cin.ignore();
	for (int i = 1; i <= n; i++) {

		cout << "> COURSE #" << i << ":\n";
		course[i].input();
		cout << '\n';
	}
}

void Student::output() {


	cout << left << setfill(' ')
		<< "ID: "
		<< setw(16) << this->id
		<< "Name: "
		<< setw(14) << this->name
		<< '\n';
	cout << left << setfill(' ')
		 << setw(6) << "Code"
		 << setw(27) << "Course Name"
		 << setw(13) << "Credit Score"
		 << '\n';
	cout << "----------------------------------------------\n";
	for (int i = 1; i <= 3; i++) {

		course[i].output();
	}
	cout << "----------------------------------------------\n";
	cout << "Total Credit: " << this->getTotalCredit()<< '\n';
	cout << "GPA: " << int(this->getGPA()) << '\n';
}
int Student::getTotalCredit() {

	int sum= 0;
	for (int i = 1; i <= 99; i++) {

		if (course[i].getCredit() == -1) {

			break;
		}
		sum += course[i].getCredit();
	}
	return sum;
}

double Student::getGPA() {

	double sum = 0;
	int n= 1;
	for (int i = 1; i <= 99; i++) {
		if (course[i].getScore() == -1) {
			n = i - 1;
			break;
		}
		sum += course[i].getScore();
	}
	return sum / n;
}

int main() {

	Student s1;
	cout << "> ENTER STUDENT DETAILS:\n";
	s1.input();
	cout << '\n';
	cout << "> STUDENT DETAIL:\n";
	s1.output();
}