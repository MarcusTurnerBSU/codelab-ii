#include "Students.h"

//defining the parameterised constructor and class methods
Students::Students(string n, int m1, int m2, int m3) {
	name = n;
	mark1 = m1;
	mark2 = m2;
	mark3 = m3;
}

//method used for calculating the average
void Students::calcGrade() {
	int avg;
	avg = (mark1 + mark2 + mark3) / 3;
	cout << "The average is: " << avg << endl;
}

//method for displaying student's name and marks
void Students::display() {
	cout << "Student's name: " << name << endl;
	cout << "Mark 1: " << mark1 << endl;
	cout << "Mark 2: " << mark2 << endl;
	cout << "Mark 3: " << mark3 << endl;
}