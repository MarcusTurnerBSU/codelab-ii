#include <iostream>
using namespace std;

int main() {

	int num;

	cout << "Please enter a number" << endl;
	cin >> num;

	//error checking users input
	while (cin.fail()) {
		cout << "Invalid Input. Please enter a whole number" << endl;
		cin.clear();
		cin.ignore(1000, '\n');
		cin >> num;
	}
	cout << endl;

	//outputting the value
	cout << "You have entered the number: " << num << endl;

	//an int pointer assigned the address of 'num'
	int* myIntPtr = &num;

	//outputting the address
	cout << "The address of where your number is stored: " << myIntPtr << endl;

	//outputting the value after derefencing the pointer and accessing the value
	cout << "Outputting your number after derefencing: " << *myIntPtr << endl;

	return 0;
}