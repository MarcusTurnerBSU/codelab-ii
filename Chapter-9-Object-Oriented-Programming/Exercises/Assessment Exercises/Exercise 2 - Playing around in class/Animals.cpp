#include "Animals.h"
//this file includes all of the definitions

	//default constructor
	Animal::Animal() {
		cout << "An animal has been created" << endl;
	}
	
	//constructor with parameters
	Animal::Animal(string t, string b, string n, string c, int a, double w, string no, char g) {
		cout << "Parameterised constructor running" << endl;
		type = t;
		breed = b;
		name = n;
		colour = c;
		age = a;
		weight = w;
		noise = no;
		gender = g;
	}

	//class methods
	void Animal::sayHello() {
		cout << "Hello, my name is: " << name << endl;
	}

	void Animal::makeNoise() {
		cout << "I'm " << name << " and I make a " << noise << " noise" << endl;
	}

	void Animal::animalDetails() {
		cout << "The type of animal: " << type << endl;
		cout << "The animal's breed: " << breed << endl;
		cout << "The animal's name: " << name << endl;
		cout << "The animal's colour: " << colour << endl;
		cout << "The animal's age: " << age << " years old" << endl;
		cout << "The animal's weight: " << weight << "kg" << endl;
		cout << "The animal's noise: " << noise << endl;
		cout << "The animal's gender: " << gender << endl;
	}

	//destructor
	Animal::~Animal() {
		cout << "An animal has been deleted" << endl;
	}
