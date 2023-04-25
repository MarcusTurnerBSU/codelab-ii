#include <iostream>
//enables file handling
#include <fstream>
#include <string>
//allows string to int conversion
#include <sstream>
using namespace std;

int main() {
	
	//accessing the file
	ifstream inputFile("../../../../Resources/numbersB.txt");
	//checking if the file is open
	if (inputFile.is_open()) {
		cout << "Ready for reading data" << endl;

		cout << "================================" << endl;
		cout << "The values in the file are below" << endl;

		//temp variables for i
		string data;
		stringstream ss;
		//where i gets stored into
		int nums[100];

		for (int i = 0; i < 100; i++) {
			//get all eveything up to the '|' key
			getline(inputFile, data, '|');
			//i inserted into the stringstream
			ss << data;
			//same i being extracted into the array
			ss >> nums[i];

			//resetting the stringstream to it's original state
			ss.str("");
			ss.clear();

			cout << "Number " << i + 1 << ": " << nums[i] << endl;
		}
		//closing the file
		inputFile.close();
	}
	else {
		cout << "Sorry, that file can not be found" << endl;
	}

	return 0;
}