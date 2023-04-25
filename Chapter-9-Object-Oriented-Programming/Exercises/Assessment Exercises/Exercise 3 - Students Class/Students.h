#pragma once
#include <iostream>
#include <string>
using namespace std;

//class object and it's data members
class Students {
public:
	string name;
	int mark1;
	int mark2;
	int mark3;

	//declaring parameterised constructor and class methods
	Students(string n, int m1, int m2, int m3);
	void calcGrade();
	void display();
};
