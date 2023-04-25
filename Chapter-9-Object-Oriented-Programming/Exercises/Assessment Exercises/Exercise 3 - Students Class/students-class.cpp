#include <iostream>
#include <string>
#include <array>
#include "Students.h"
using namespace std;

int main() {
	//variables and array to hold the user inputs
	string name;
	cout << "Enter the student's name: " << endl;
	cin >> name;

	array<int, 3> marks;
	for (int i = 0; i < 3; i++) {
		cout << "Enter mark " << i + 1 << ":" << endl;
		cin >> marks[i];
	}

	cout << "========================" << endl;
	cout << endl;
	cout << "Student Information" << endl;

	
		//passing in user inputs into the parameterised constructor
		Students student1(name, marks[0], marks[1], marks[2]);
		//passing in user inputs into the class methods
		student1.calcGrade();
		student1.display();

		return 0;
}