#pragma once
#include <iostream>
#include <string>
using namespace std;

class Animal {
protected:
	string name;
	string colour;
	double weight;
	int age;
	string starsign;
public:
	Animal();
	Animal(string name, string colour, double weight, int age, string starsign);
	void eat();
	void move();
	void speak();
	void die();
};


class Kangaroo : public Animal {
public:
	Kangaroo();
	Kangaroo(string name, string colour, double weight, int age, string starsign);
	void punch();
	void stroke();
	void speak();

};

class Lion : public Animal {
public:
	Lion();
	Lion(string name, string colour, double weight, int age, string starsign);
	void roar();
	void scratch();
	void speak();
};

class Duck : public Animal {
public:
	Duck();
	Duck(string name, string colour, double weight, int age, string starsign);
	void quackQuack();
	void speak();
	//void printInfo();
};