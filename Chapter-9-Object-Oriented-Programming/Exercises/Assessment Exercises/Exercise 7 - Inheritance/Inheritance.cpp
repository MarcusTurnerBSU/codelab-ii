//EXERCISE 7
#include <iostream>
#include <string>
#include "Animals.h"
using namespace std;

int main() {

	cout << endl;
	cout << "Animal Information" << endl;
	cout << "============================================" << endl;
	cout << endl;
	
	//*changed* - no longer assigning values data members as constructors have been implemented for each object
	Dog dog("Canidae", "Cockapoo", "Popcorn", 2, "Golden", 10.5, "Woof Woof", 'F');
	//newlines have been added to increase readablity for all of the data shown to the user
	cout << endl;
	dog.sayHello();
	dog.makeNoise();
	dog.animalDetails();
	cout << endl;
	dog.colourful();
	dog.friendly();
	dog.floppyEars();
	dog.eating();
	dog.sleeping();

	cout << endl;
	cout << "============================================" << endl;
	cout << endl;

	Cat cat("Felidae", "Scottish Fold", "Meredith", 9, "White", 3.2, "Meow Meow", 'F');
	cout << endl;
	cat.sayHello();
	cat.makeNoise();
	cat.animalDetails();
	cout << endl;
	cat.colourful();
	cat.stubborn();
	cat.feedMe();
	cat.eating();
	cat.sleeping();

	cout << endl;
	cout << "============================================" << endl;
	cout << endl;

	Cow cow("Bovidae", "Highland Cattle", "Barbara", 4, "Brown", 550.34, "Mooooooo", 'M');
	cout << endl;
	cow.sayHello();
	cow.makeNoise();
	cow.animalDetails();
	cout << endl;
	cow.colourful();
	cow.curious();
	cow.smelly();
	cow.eating();
	cow.sleeping();

	cout << endl;
	cout << "============================================" << endl;
	cout << endl;

	{//constructor starts - wanted to keep this and it worked :)
		Elephant elephant("Elephantidae", "African Bush", "Ellie", 15, "Grey", 5500.35, "*Trumpet*", 'F');
		cout << endl;
		elephant.sayHello();
		elephant.makeNoise();
		elephant.animalDetails();
		cout << endl;
		elephant.colourful();
		elephant.trunk();
		elephant.ears();
		elephant.eating();
		elephant.sleeping();
	}//destructor will run here

	cout << endl;

	return 0;
}