#include "Animals.h"
//this file includes all of the definitions

//default constructor
Animal::Animal() {
	cout << "An animal has been created" << endl;
}

/*constructor with parameters
*changed* - makes it clear to the user what is required when user is using the constructor*/
Animal::Animal(string type, string name, int age, double weight, string noise, char gender) {
	cout << "Parameterised constructor running" << endl;
	this->type = type;
	this->name = name;
	this->age = age;
	this->weight = weight;
	this->noise = noise;
	this->gender = gender;
}

//class methods
void Animal::sayHello() {
	cout << "Hello, my name is: " << name << endl;
}

void Animal::makeNoise() {
	cout << "I'm " << name << " and I make a " << noise << " noise" << endl;
}

//*changed* - breed and colour data members to be private for subclasses(i.e dog, cat and cow)
void Animal::animalDetails() {
	cout << "The type of animal: " << type << endl;
	cout << "The animal's name: " << name << endl;
	cout << "The animal's age: " << age << " years old" << endl;
	cout << "The animal's weight: " << weight << "kg" << endl;
	cout << "The animal's noise: " << noise << endl;
	cout << "The animal's gender: " << gender << endl;
}

//destructor
Animal::~Animal() {
	cout << "An animal has been deleted" << endl;
}

//subclasses here - definitions of each subclass here

//DOG
Dog::Dog() {

}

Dog::Dog(string type, string breed, string name, int age, string colour, double weight, string noise, char gender) {
		this->type = type;
		this->breed = breed;
		this->name = name;
		this->age = age;
		this->colour = colour;
		this->weight = weight;
		this->noise = noise;
		this->gender = gender;
}

void Dog::colourful() {
	cout << "Hi, I am " << name << " and my colour is: " << colour << endl;
}

void Dog::friendly() {
	cout << "I'm a " << type << ", my name is: " << name << " and I like meeting and playing with new dog friends in the park" << endl;
}

void Dog::floppyEars() {
	cout << "I am " << name << " and because of my breed: " << breed << ". I have floppy ears" << endl;
}

//CAT
Cat::Cat() {

}

Cat::Cat(string type, string breed, string name, int age, string colour, double weight, string noise, char gender) {
	this->type = type;
	this->breed = breed;
	this->name = name;
	this->age = age;
	this->colour = colour;
	this->weight = weight;
	this->noise = noise;
	this->gender = gender;
}

void Cat::colourful() {
	cout << "Hi, I am " << name << " and my colour is: " << colour << endl;
}

void Cat::stubborn() {
	cout << "I'm a " << type << " and I like pushing objects off ledge and annoy my owners until they given me attention" << endl;
}

void Cat::feedMe() {
	cout << "I am " << name << " and because of my breed: " << breed << ". I only want offer affection when I want feeding" << endl;
}

//COW
Cow::Cow() {

}

Cow::Cow(string type, string breed, string name, int age, string colour, double weight, string noise, char gender) {
	this->type = type;
	this->breed = breed;
	this->name = name;
	this->age = age;
	this->colour = colour;
	this->weight = weight;
	this->noise = noise;
	this->gender = gender;
};

void Cow::colourful() {
	cout << "Hi, I am " << name << " and my colour is: " << colour << endl;
}

void Cow::curious() {
	cout << "I'm a " << type << ", my name is: " << name << " and I am curious when people are in the field" << endl;
}

void Cow::smelly() {
	cout << "I am " << name << " and because of my breed: " << breed << ". I produce a lot of smelly gas" << endl;
}

//Changing the contents of the class method to represent Cow and Elephant eating habits
void Cow::eating() {
	cout << "I'm " << name << " and I'm a herbivores. Mmmmmm, grass and plants taste plain" << endl;
}

//Changing the contents of the class method to represent Cow and Elephant sleeping habits
void Cow::sleeping() {
	cout << "I'm " << name << " and I like to sleep for 3 hours a day. I have nothing better to do" << endl;
}

//ELEPHANT
Elephant::Elephant() {

}

Elephant::Elephant(string type, string breed, string name, int age, string colour, double weight, string noise, char gender) {
	this->type = type;
	this->breed = breed;
	this->name = name;
	this->age = age;
	this->colour = colour;
	this->weight = weight;
	this->noise = noise;
	this->gender = gender;
}

void Elephant::colourful() {
	cout << "Hi, I am " << name << " and my colour is: " << colour << endl;
}

void Elephant::trunk() {
	cout << "I'm a " << type << ", my name is: " << name << " and I have a long trunk that I use to eat with" << endl;
}

void Elephant::ears() {
	cout << "I am " << name << " and because of my breed: " << breed << ". I have bigger ears so you know I'm an African Elephant" << endl;
}

void Elephant::eating() {
	cout << "I'm " << name << " and I'm a herbivores. Mmmmmm, grass and leaves are okay I guess" << endl;
}

void Elephant::sleeping() {
	cout << "I'm " << name << " and I like to sleep for 2 hours a day in the wild. So I can look after my young" << endl;
}