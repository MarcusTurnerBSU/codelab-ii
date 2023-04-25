#include <iostream>
#include <string>
using namespace std;

int main() {

	string address[3][2];

	cout << "Enter your friend's name and postcode in that order" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			//this is capturing the users input - name and postcode
			getline(cin, address[i][j]);
		}
	}
	cout << endl;
	cout << "Name\tPostcode" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			//this is outputting all the data that has been inputted by the user
			cout << address[i][j] << "\t";
		}
		cout << endl;
	}

	return 0;
}