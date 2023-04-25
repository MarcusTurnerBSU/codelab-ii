#include <iostream>
using namespace std;

int main() {
	

	//INT VARIABLE
	cout << "Int Variable" << endl;
	cout << endl;

	//allocating memory for an integer variable
	int* intPtr = new int(12);

	//outputting the memory address
	cout << "The memory address of the int variable: " << intPtr << endl;
	//outputting the value
	cout << "The value stored in the int variable: " << *intPtr << endl;
	
	//altering the value
	*intPtr = 25;
	//outputting the new value
	cout << "The new value stored in the int variable: " << *intPtr << endl;

	//this stops any memory leaks
	delete intPtr;

	cout << endl;
	cout << "=======================================================" << endl;

	//STRING VARIABLE
	cout << "\nString Variable" << endl;
	cout << endl;

	string* strPtr = new string("Hello World");

	cout << "The memory address of the string variable: " << strPtr << endl;
	cout << "The value stored in the string variable: " << *strPtr << endl;

	*strPtr = "Goodbye";
	cout << "The new value stored in the string variable: " << *strPtr << endl;

	delete strPtr;

	return 0;
}