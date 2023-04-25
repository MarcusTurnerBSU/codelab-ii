#include "Utils.h"

void print(string msg) {//function takes string and outputs it
	cout << msg << endl;
}

int numCheck() {//function returns validated number
	int n;
	cin >> n;
	while (cin.fail()) {
		cout << "Invalid Input, try again" << endl;
		cin.clear();
		cin.ignore(1000, '\n');
		cin >> n;
	}
	return n;
}