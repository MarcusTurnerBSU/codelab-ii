#include <iostream>
using namespace std;

int main() {

	string snacks[3][3] = {
		{"Cola", "Lucozade", "Milk"},
		{"Egg", "Bread", ":)"},
		{"Snickers", "100% Cocoa", "Mars"},
	};
	//this will print out the smiley face
	cout << snacks[1][2] << endl;

	//this prints out all of the snacks
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << snacks[i][j] << endl;
		}
	}
	cout << endl;
	//printing everything using a range based for loop
	for (auto& row : snacks) {
		for (auto col : row) {
			cout << col << endl;
		}
	}

	return 0;
}