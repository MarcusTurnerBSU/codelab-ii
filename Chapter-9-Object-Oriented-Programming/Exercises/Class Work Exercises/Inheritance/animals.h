#pragma once

#include <iostream>
#include <string>
using namespace std;

class Animal {
protected:
	string name;
	int age;
	double weight;
public:
	Animal();
	Animal(string name, int age, double weight);
	void eat();
	void move();
	void die();
	void jump();
	//void speak();
};

class Cat : public Animal {
	string breed;
public:
	Cat();
	Cat(string name, int age, double weight, string breed);
	void speak();
};

class Dog : public Animal {
	string breed;
public:
	Dog();
	Dog(string name, int age, double weight, string breed);
	void speak();
};

class Bird : public Animal {
	string breed;
public:
	Bird();
	Bird(string name, int age, double weight, string breed);
	void speak();
	void move();
};