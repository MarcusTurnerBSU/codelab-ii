#include "animals.h"

Animal::Animal() {

}

Animal::Animal(string name, int age, double weight) {
	this->name = name;
	this->age = age;
	this->weight = weight;
}

void Animal::eat() {
	cout << name << " is eating nom nom nom!" << endl;
}

void Animal::move() {
	cout << name << " is walking!" << endl;
}

void Animal::die() {
	cout << name << " died. Hashtag sad face" << endl;
}

void Animal::jump() {
	cout << name << " is jumping" << endl;
}

//CAT

Cat::Cat() {
	
}

Cat::Cat(string name, int age, double weight, string breed) {
	this->name = name;
	this->age = age;
	this->weight = weight;
	this->breed = breed;
}

void Cat::speak() {
	cout << name << " is meowing!" << endl;
}

//DOG

Dog::Dog() {

}

Dog::Dog(string name, int age, double weight, string breed) {
	this->name = name;
	this->age = age;
	this->weight = weight;
	this->breed = breed;
}

void Dog::speak() {
	cout << name << " is woofing!" << endl;
}

//BIRD

Bird::Bird() {

}

Bird::Bird(string name, int age, double weight, string breed) {
	this->name = name;
	this->age = age;
	this->weight = weight;
	this->breed = breed;
}

void Bird::speak() {
	cout << name << " is tweeting!" << endl;
}

void Bird::move() {
	cout << name << " is flying" << endl;
}