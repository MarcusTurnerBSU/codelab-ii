#include <iostream>
//allows for file handling
#include <fstream>
#include <string>
using namespace std;

int main() {

	//finding the file location
	ifstream inputFile("../../../../Resources/randomStrings.txt");
	//checking if file is open
	if (inputFile.is_open()) {
		cout << "Ready for reading..." << endl;

		int count = 0;
		string line;

		while (!inputFile.eof()) {
			getline(inputFile, line);
			//increases at a new line
			count++;
		}

		cout << "The number of lines in the file are: " << count << endl;
		//closing file
		inputFile.close();
	}
	else {
		cout << "Sorry, this file could not be found" << endl;
	}


	return 0;
}