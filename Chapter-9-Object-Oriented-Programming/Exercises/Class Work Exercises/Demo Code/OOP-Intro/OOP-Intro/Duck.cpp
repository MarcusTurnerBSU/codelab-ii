#include "Duck.h"


Duck::Duck() {//duck constructor - runs when object created
	cout << "Duck has been created" << endl;
}

Duck::Duck(string name, string colour, int age, double weight) {//parameterised constructor, used to set class members
	cout << "Duck created with parameterised constructor" << endl;
	this->name = name;
	this->colour = colour;
	this->age = age;
	this->weight = weight;
}

void Duck::quackQuack() {//function so duck can say hello
	cout << "Quack Quack my name is " << name << " and I am quackers" << endl;
}

void Duck::printInfo() {//function to print duck info
	cout << name << endl;
	cout << colour << endl;
	cout << age << endl;
	cout << weight << endl;
}

void Duck::increaseAge() {
	age++;
}

void Duck::increaseWeight(double amount) {
	weight += amount;
}

double Duck::getWeight() {
	return weight;
}

int Duck::getAge() {
	return age;
}

string Duck::getName() {
	return name;
}

string Duck::getColour() {
	return colour;
}

Duck::~Duck() {//duck destructor - runs when object goes out of scope / deleted
	cout << "Oh no " << name << " got shot" << endl;
}