#include "Duck.h"

Duck::Duck() {
	cout << "Duck has been created" << endl;
}

Duck::Duck(string n, string c, int a, double w) {
	cout << "Parameterised constructor running" << endl;
	name = n;
	colour = c;
	age = a;
	weight = w;
}

void Duck::sayQuack() {
	cout << name << " says: QUACK!!!" << endl;
}

void Duck::printInfo() {
	cout << "Name is: " << name << endl;
	cout << "Colour is: " << colour << endl;
	cout << "Age is: " << age << endl;
	cout << "Weight is: " << weight << endl;
}

Duck::~Duck() {
	cout << "Oh no " << name << " was shot!" << endl;
}