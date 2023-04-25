#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {

	string name[4], pCode[4];
	int age[4];

	ifstream iFile("classdemo.txt");
	int ind = 0;
	if (iFile.is_open()) {
		cout << "Reading in data..." << endl;
		while (!iFile.eof()) {
			getline(iFile, name[ind], '\t');
			iFile >> age[ind];
			iFile.ignore(10, '\t');
			getline(iFile, pCode[ind]);
			ind++;
		}
		iFile.close();
	}
	else {
		cout << "Error reading file..." << endl;
	}

	cout << "Here is the Employee Database" << endl;
	for (int i = 0; i < 4; i++) {
		cout << "Name: " << name[i] << " Age: " << age[i] << " Postcode: " << pCode[i] << endl;
	}

	return 0;
}