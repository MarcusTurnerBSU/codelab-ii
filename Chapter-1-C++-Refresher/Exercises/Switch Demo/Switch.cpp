#include <iostream>
using namespace std;

int main() {

	cout << "Would you like to continue? (Y/N)" << endl;
	char input;
	cin >> input;

	switch (input) {
	//a benefit to leaving out the break in each cases
	case 'y':
	case 'Y':
		cout << "Game continuing" << endl;
		break;
	case 'n':
	case 'N':
		cout << "You Quit" << endl;
		break;
	default:
		cout << "Wrong Input" << endl;
	}
}