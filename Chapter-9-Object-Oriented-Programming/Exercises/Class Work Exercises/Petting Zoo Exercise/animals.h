#pragma once

#pragma once
#include <iostream>
#include <string>
using namespace std;


class Kangaroo {
public:
	string name;
	string colour;
	double weight;
	int age;
	Kangaroo();
	Kangaroo(string n, string c, double w, int a);
	void punch();
	void stroke();


};

class Lion {
public:
	string name;
	string colour;
	double weight;
	int age;
	Lion();
	Lion(string n, string c, double w, int a);
	~Lion();
	void roar();
	void scratch();
};

class Duck {
public:
	string name;
	string colour;
	int age;
	double weight;

	Duck();
	Duck(string n, string c, int a, double w);
	~Duck();
	void quackQuack();
	void printInfo();
};