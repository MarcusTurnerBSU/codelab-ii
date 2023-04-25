#include <iostream>
#include "Animals.h"
using namespace std;

int main() {
	//instantiate animals
	Kangaroo k1("Billy", "Blue", 14.5, 8, "Cancer");
	Duck d1("Fred", "Red", 8.6, 13, "Leo");
	Lion l1("Leo", "Yellow", 20.1, 12, "Virgo");

	//output user menu
	cout << "Welcome to the Jungle" << endl;
	cout << "1: Kangaroo" << endl;
	cout << "2: Duck" << endl;
	cout << "3: Lion" << endl;
	int input;
	cin >> input;
	switch (input) {
	case 1:			//handle kangaroo case
		k1.punch();
		k1.stroke();
		break;
	case 2:			//handle duck case
		d1.quackQuack();
		//d1.printInfo();
		break;
	case 3:			//handle lion case
		l1.roar();
		l1.scratch();
	}
	return 0;
}