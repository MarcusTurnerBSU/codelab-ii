#include <iostream>
#include <string>
#include "Animals.h"
using namespace std;

int main() {

	cout << endl;
	cout << "Animal Information" << endl;
	cout << "============================================" << endl;
	cout << endl;
	//assigning values to each data member
	Animal dog;
	dog.type = "Canidae";
	dog.breed = "Cockapoo";
	dog.name = "Popcorn";
	dog.colour = "Golden";
	dog.age = 2;
	dog.weight = 10.5;
	dog.noise = "Woof Woof";
	dog.gender = 'F';
	dog.sayHello();
	dog.makeNoise();
	dog.animalDetails();

	cout << endl;
	cout << "============================================" << endl;
	cout << endl;

	Animal cow;
	cow.type = "Bovidae";
	cow.breed = "Highland Cattle";
	cow.name = "Barbara";
	cow.colour = "Brown";
	cow.age = 4;
	cow.weight = 550.34;
	cow.noise = "Mooooooooo";
	cow.gender = 'M';
	cow.sayHello();
	cow.makeNoise();
	cow.animalDetails();

	cout << endl;
	cout << "============================================" << endl;
	cout << endl;

	Animal cat;
	cat.type = "Felidae";
	cat.breed = "Scottish Fold";
	cat.name = "Meredith";
	cat.colour = "White";
	cat.age = 9;
	cat.weight = 3.2;
	cat.noise = "Meow Meow";
	cat.gender = 'F';
	cat.sayHello();
	cat.makeNoise();
	cat.animalDetails();

	cout << endl;
	cout << "============================================" << endl;
	cout << endl;

	{//constructor starts
		Animal elephant("Elephantidae", "African Bush", "Ellie", "Grey", 15, 5500.35, "*Trumpet*", 'F');
		elephant.sayHello();
		elephant.makeNoise();
		elephant.animalDetails();
	}//destructor will run here

	cout << endl;

	return 0;
}