#pragma once
#include <iostream>
#include <string>
using namespace std;

class Duck {
	//data to define duck characteristics
	string name;
	string colour;
	int age;
	double weight;
public:
	
	Duck();//duck constructor
	Duck(string name, string colour, int age, double weight);//parameterised constructor
	~Duck();//destructor

	//Duck methods
	void quackQuack();
	void printInfo();

	//getter
	double getWeight();
	int getAge();
	string getName();
	string getColour();

	//setter
	void increaseAge();
	void increaseWeight(double amount);
};