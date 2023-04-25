#pragma once
#include <iostream>
#include <string>
using namespace std;
//this file includes all of the declarations

//class object
class Animal {
//protected data accessible by subclasses
protected:
	//data members
	string type;
	string name;
	int age;
	double weight;
	string noise;
	char gender;

public:
	//default constructor
	Animal();
	//constructor with parameters
	Animal(string type, string name, int age, double weight, string noise, char gender);
	//class methods
	void sayHello();
	void makeNoise();
	void animalDetails();

	/*Polymorphism can only be declared inside the class declaration - couple of class methods for the extension task
	Dog and Cat will only need to call both class methods in the main function as this is true to these animals*/
	virtual void eating() {
		cout << "I'm " << name << " and I'm a carivore. Meat is yummy!!" << endl;
	}
	virtual void sleeping() {
		cout << "I'm " << name << " and I like to sleep between 10 - 15 hours a day. Sleepy strokes are the best!" << endl;
	}

	//destructor
	~Animal();
};

//subclasses here - declarations of each subclass

/*DOG
Dog Object accessing the Animal object*/
class Dog : public Animal {
	//private data members
	string colour;
	string breed;
public:
	//constructors and class methods
	Dog();
	Dog(string type, string breed, string name, int age, string colour, double weight, string noise, char gender);
	void colourful();
	void friendly();
	void floppyEars();
};

//CAT

class Cat : public Animal {
	string colour;
	string breed;
public:
	Cat();
	Cat(string type, string breed, string name, int age, string colour, double weight, string noise, char gender);
	void colourful();
	void stubborn();
	void feedMe();
};

//COW

class Cow : public Animal {
	string colour;
	string breed;
public:
	Cow();
	Cow(string type, string breed, string name, int age, string colour, double weight, string noise, char gender);
	void colourful();
	void curious();
	void smelly();
	//this allows me to change the class methods for the Cow and Elephant objects in the .h file
	void eating();
	void sleeping();
};

//ELEPHANT

class Elephant : public Animal {
	string colour;
	string breed;
public:
	Elephant();
	Elephant(string type, string breed, string name, int age, string colour, double weight, string noise, char gender);
	void colourful();
	void trunk();
	void ears();
	void eating();
	void sleeping();
};