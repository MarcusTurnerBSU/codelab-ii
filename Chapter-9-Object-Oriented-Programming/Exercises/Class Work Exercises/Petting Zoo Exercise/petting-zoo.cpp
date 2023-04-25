#include <iostream>
#include "Animals.h"
using namespace std;

int main() {

	Kangaroo k1("Billy", "Blue", 14.5, 8);
	Duck d1("Fred", "Red", 13, 8.6);
	Lion l1("Leo", "Yellow", 20, 12);
	cout << "Welcome to the Jungle" << endl;
	cout << "1: Kangaroo" << endl;
	cout << "2: Duck" << endl;
	cout << "3: Lion" << endl;
	int input;
	cin >> input;
	switch (input) {
	case 1:
		k1.punch();
		k1.stroke();
		break;
	case 2:
		d1.quackQuack();
		d1.printInfo();
		break;
	case 3:
		l1.roar();
		l1.scratch();
	}
	return 0;
}