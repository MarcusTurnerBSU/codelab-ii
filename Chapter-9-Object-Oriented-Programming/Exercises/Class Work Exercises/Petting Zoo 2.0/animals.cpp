#include "Animals.h"

Animal::Animal() {

}

Animal::Animal(string name, string colour, double weight, int age, string starsign) {
	this->name = name;
	this->colour = colour;
	this->weight = weight;
	this->age = age;
	this->starsign = starsign;
}

void Animal::eat() {
	cout << name << "is eating " << endl;
}

void Animal::move() {
	cout << name << "is moving " << endl;
}

void Animal::die() {
	cout << name << "is dead" << endl;
}

//KANGAROO FUCTION DEFINITIONS
Kangaroo::Kangaroo() {
	cout << "Constructing Kangaroo" << endl;
}
Kangaroo::Kangaroo(string name, string colour, double weight, int age, string starsign) {
	this->name = name;
	this->colour = colour;
	this->age = age;
	this->weight = weight;
	this->starsign = starsign;

}
void Kangaroo::punch() {
	cout << "Pow Pow" << endl;
}
void Kangaroo::stroke() {
	cout << "Stroking " << name << endl;
}

void Kangaroo::speak() {
	cout << name << "*Punching noises*" << endl;
}


//DUCK FUCTION DEFINITIONS
Duck::Duck() {
	cout << "Duck has been created" << endl;
}

Duck::Duck(string name, string colour, double weight, int age, string starsign) {
	cout << "Parameterised constructor running" << endl;
	this->name = name;
	this->colour = colour;
	this->weight = weight;
	this->age = age;
	this->starsign = starsign;

}

void Duck::quackQuack() {
	cout << "Quack Quack my name is: " << name << endl;
}

//void Duck::printInfo() {
//	cout << name << endl;
//	cout << colour << endl;
//	cout << age << endl;
//	cout << weight << endl;
//}

//Duck::~Duck() {
//	cout << "Oh no " << name << " was shot!" << endl;
//}

//LION

Lion::Lion() {
	cout << "Lion has been created" << endl;
}

Lion::Lion(string name, string colour, double weight, int age, string starsign) {
	this->name = name;
	this->colour = colour;
	this->age = age;
	this->weight = weight;
	this->starsign = starsign;
}

//Lion::~Lion() {
//	cout << "Lion has been killed" << endl;
//}

void Lion::roar() {
	cout << "Roarrrrrrr!!!" << endl;
}

void Lion::scratch() {
	cout << "Itchy Itchy" << endl;
}