#include <iostream>
#include <string>
using namespace std;

struct Student {
	string name;
	string race;
	int id;
	int age;
};

void printStudent(const Student &student);
Student returnOldest(const Student& s1, const Student& s2);

int main() {

	//assign values to struct members
	Student student1;
	student1.name = "Marcus Turner";
	student1.race = "White British";
	student1.id = 396969;
	student1.age = 24;

	Student student2;
	student2.name = "Lewis Jones";
	student2.race = "White British";
	student2.id = 391232;
	student2.age = 23;


	Student oldest = returnOldest(student1, student2);

	printStudent(student1);
	printStudent(student2);

	printStudent(oldest);

	//output the students by access the data members
	/*cout << "Student info" << endl;
	cout << "============" << endl;
	cout << "Student Name: " << student1.name << endl;
	cout << "Student Race: " << student1.race << endl;
	cout << "Student ID: " << student1.id << endl;
	cout << "Student Age: " << student1.age << endl;
	cout << endl;
	cout << "Student info" << endl;
	cout << "============" << endl;
	cout << "Student Name: " << student2.name << endl;
	cout << "Student Race: " << student2.race << endl;
	cout << "Student ID: " << student2.id << endl;
	cout << "Student Age: " << student2.age << endl;*/



	return 0;
}

void printStudent(const Student &student) {
	cout << "Student info" << endl;
	cout << "============" << endl;
	cout << "Student Name: " << student.name << endl;
	cout << "Student Race: " << student.race << endl;
	cout << "Student ID: " << student.id << endl;
	cout << "Student Age: " << student.age << endl;
	cout << endl;
}

Student returnOldest(const Student& s1, const Student& s2) {
	if (s1.age > s2.age) {
		return s1;
	}
	else {
		return s2;
	}
}