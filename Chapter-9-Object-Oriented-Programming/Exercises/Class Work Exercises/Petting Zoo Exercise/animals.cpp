#include "Animals.h"
//KANGAROO FUCTION DEFINITIONS
Kangaroo::Kangaroo() {
	cout << "Constructing Kangaroo" << endl;
}
Kangaroo::Kangaroo(string n, string c, double w, int a) {
	name = n;
	colour = c;
	weight = w;
	age = a;
}
void Kangaroo::punch() {
	cout << "Pow Pow" << endl;
}
void Kangaroo::stroke() {
	cout << "Stroking " << name << endl;
}


//DUCK FUCTION DEFINITIONS
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

void Duck::quackQuack() {
	cout << "Quack Quack my name is: " << name << endl;
}

void Duck::printInfo() {
	cout << name << endl;
	cout << colour << endl;
	cout << age << endl;
	cout << weight << endl;
}

Duck::~Duck() {
	cout << "Oh no " << name << " was shot!" << endl;
}

//LION

Lion::Lion() {
	cout << "Lion has been created" << endl;
}

Lion::Lion(string n, string c, double w, int a) {
	name = n;
	colour = c;
	weight = w;
	age = a;
}

Lion::~Lion() {
	cout << "Lion has been killed" << endl;
}

void Lion::roar() {
	cout << "Roarrrrrrr!!!" << endl;
}

void Lion::scratch() {
	cout << "Itchy Itchy" << endl;
}