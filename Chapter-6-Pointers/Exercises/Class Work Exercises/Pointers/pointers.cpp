#include <iostream>
using namespace std;

int main() {

	//pointer syntax - stores the address of an int and string
	int* intPtr;
	string* myStringPtr;

	int num1 = 6;
	string word = "Hello World";

	intPtr = &num1;
	myStringPtr = &word;

	//prints out the memory address of num and word
	cout << intPtr << endl;
	cout << myStringPtr << endl;

	//deferencing the pointer and prints the value
	cout << *intPtr << endl;
	cout << *myStringPtr << endl;

	//access the value stored at the myStringPtr and change them
	*myStringPtr = "CodeLab";
	cout << word << endl;

	//reassign intPtr to new variable then print new address and new value
	int num2 = 101;
	intPtr = &num2;
	cout << intPtr << endl;
	cout << *intPtr << endl;

	return 0;
}