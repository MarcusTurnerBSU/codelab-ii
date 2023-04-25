#include <iostream>
#include <string>
#include "Duck.h"
#include "Utils.h"
using namespace std;


int main() {
	//Functions from utils
	/*print("Hello World");
	print("Enter a number");
	int num1 = numCheck();*/

	//instantiate duck 1 and assign values to data members
	Duck duck1("Donald", "Black", 4, 6.7);//duck 1 uses default constructor
	//duck1.printInfo();//run duck print function

	
	cout << endl;
	//instantiate duck 2 and assign values to data members
	Duck duck2("Daffy", "Grey", 13, 8.45);//duck 1 uses default constructor
	//duck2.printInfo();//run duck print function

	duck1.increaseWeight(3);
	duck2.increaseAge();

	cout << endl;
	//make heavy duck quack
	cout << "The heaviest duck is..." << endl;
	if (duck1.getWeight() > duck2.getWeight()) {
		duck1.quackQuack();
	}
	else {
		duck2.quackQuack();
	}
	
	duck1.printInfo();
	duck2.printInfo();

	return 0;
}//duck 1 and 2 goes out of scope here destructors should run

