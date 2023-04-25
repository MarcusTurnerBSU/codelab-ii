#include <iostream>
#include <string>
#include <array>
using namespace std;

//create the structure
struct Student {
	string name;
	string race;
	int id;
	int age;
};

void printStudent(const Student& student);

int main() {

	array<Student, 3> studentList;

	for (int i = 0; i < studentList.size(); i++) {
		cout << "Input name " << endl;
		getline(cin, studentList[i].name);
		cout << "Input race " << endl;
		getline(cin, studentList[i].race);
		cout << "Input ID " << endl;
		cin >> studentList[i].id;
		cout << "Input Age " << endl;
		cin >> studentList[i].age;
		cin.ignore(10, '\n');

	};

	for (auto& student : studentList) {
		printStudent(student);
	}
	return 0;
}

void printStudent(const Student& student) {
	cout << "Student info" << endl;
	cout << "============" << endl;
	cout << "Student Name: " << student.name << endl;
	cout << "Student Race: " << student.race << endl;
	cout << "Student ID: " << student.id << endl;
	cout << "Student Age: " << student.age << endl;
	cout << endl;
}
