//system defined includes
#include <iostream>
#include <string>
//user defined includes
#include "Duck.h"
#include "Utils.h"
using namespace std;

int main() {

	/*print("Hellow welcome to my program");
	print("Please enter a number");
	int num1 = numCheck();*/

	Duck duck1;
	duck1.name = "Doris";
	duck1.colour = "White";
	duck1.age = 5;
	duck1.weight = 5.2;

	Duck duck2("Dave", "Grey", 8, 7.4);
	/*duck2.name = "Dave";
	duck2.colour = "Grey";
	duck2.age = 8;
	duck2.weight = 7.4;*/
	cout << endl;
	cout << "Duck 1" << endl;
	duck1.printInfo();
	cout << endl;
	cout << "Duck 2" << endl;
	duck2.printInfo();

	{
		Duck duck3("Orvil", "Green", 50, 15.43);
		duck3.printInfo();
		duck3.sayQuack();
	}//duck 3 destructor will run

	cout << endl;
	cout << "The Heaviest Duck is..." << endl;
	if (duck1.weight > duck2.weight) {
		duck1.sayQuack();
	}
	else {
		duck2.sayQuack();
	}

	cout << endl;

	return 0;
}

