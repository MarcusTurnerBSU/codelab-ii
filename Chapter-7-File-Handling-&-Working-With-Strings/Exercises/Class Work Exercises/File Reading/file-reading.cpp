#include <iostream>
#include <string>
#include <fstream>//file handling stuff
using namespace std;

int main() {

	ifstream inFile("../File Handling/program-data.txt");
	string name;
	int age;

	if (inFile.is_open()) {
		cout << "Ready to read from file..." << endl;
		while (!inFile.eof()) {
			getline(inFile, name);
			inFile >> age;
			cout << name << " " << age << endl;
		}
		
	}
	else {
		cout << "Error opening file..." << endl;
	}

	return 0;
}