#pragma once
#include <iostream>
#include <string>
using namespace std;

class Duck {
public:
	string name;
	string colour;
	int age;
	double weight;

	Duck();
	Duck(string n, string c, int a, double w);
	~Duck();
	void sayQuack();
	void printInfo();
};