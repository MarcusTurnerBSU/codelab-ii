#include <iostream>
#include <string>
#include <fstream>//file handling stuff
using namespace std;

int main() {
	//File Reading
	ifstream inFile("program-data.txt");
	string name;
	int age;

	if (inFile.is_open()) {
		cout << "Ready to read from file..." << endl;
		while (!inFile.eof()) {
			getline(inFile, name);
			inFile >> age;
			inFile.ignore(10, '\n');
			cout << name << " " << age << endl;
		}

	}
	else {
		cout << "Error opening file..." << endl;
	}

	// File Writing 
	//ofstream outFile("program-data.txt");
	//if (outFile.is_open()) {
	//	cout << "File ready to write data to" << endl;

	//	cout << "Please enter your name" << endl;
	//	string userInput;
	//	getline(cin, userInput);
	//	outFile << userInput << endl;
	//	//outFile << "Hello World" << endl;

	//	cout << "Please enter your age" << endl;
	//	cin >> userInput;
	//	outFile << userInput << endl;
	//}
	//else {
	//	cout << "Could not access file" << endl;
	//}

	return 0;
}