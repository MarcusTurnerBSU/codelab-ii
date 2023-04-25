#pragma once
#include <iostream>
#include <string>
using namespace std;
//this file includes all of the declarations

//class object
class Animal {
public:
	//data members
	string type;
	string breed;
	string name;
	string colour;
	int age;
	double weight;
	string noise;
	char gender;

	//default constructor
	Animal();
	//constructor with parameters
	Animal(string t, string b, string n, string c, int a, double w, string no, char g);
	//class methods
	void sayHello();
	void makeNoise();
	void animalDetails();
	//destructor
	~Animal();
};