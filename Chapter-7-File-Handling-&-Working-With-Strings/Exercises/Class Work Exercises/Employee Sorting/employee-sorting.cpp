#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {

	string name[4], postcode[4];
	int age[4], salary[4];
	int ind = 0;

	ifstream inFile("class-ex.txt");
	if (inFile.is_open()) {
		cout << "Reading file" << endl;
		while (!inFile.eof()) {
			getline(inFile, name[ind], ',');
			inFile >> age[ind];
			inFile.ignore(10, ',');
			getline(inFile, postcode[ind], ',');
			inFile >> salary[ind];
			inFile.ignore(10, '\n');
			ind++;
		}

	}
	else {
		cout << "not working" << endl;
	}

	for (int i = 0; i < 4; i++) {
		cout << "Name: " << name[i] << " Age: " << age[i] << " Postcode: " << postcode[i] << " Salary: " << salary[i] << endl;
	}

	return 0;
}