#include <iostream>
//enables file handling
#include <fstream>
using namespace std;

int main() {

	//accessing the file
	ifstream inputFile("../../../../Resources/numbersA.txt");
	//checking if file is open
	if (inputFile.is_open()) {
		cout << "Ready for reading data" << endl;

		cout << "================================" << endl;
		cout << "The values in the file are below" << endl;

		//to store the hundred numbers
		int nums = 100;
		//allocating memory for hundred ints
		int* intPtr = new int[nums];

		//inserting i into the pointer
		for (int i = 0; i < 100; i++) {
			inputFile >> intPtr[i];

			cout << "Number " << i + 1 << ": " << intPtr[i] << endl;
		}
		//deleting the pointer
		delete[] intPtr;

		//closing the file
		inputFile.close();
	}
	else {
		cout << "Sorry, file can not be found" << endl;
	}

	return 0;
}