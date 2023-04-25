#include "Utils.h"

void print(string msg) {
	cout << msg << endl;
}

int numCheck() {
	int n;
	cin >> n;
	while (cin.fail()) {
		print("Invaild data, please enter a number");
		cin.clear();
		cin.ignore(1000, '\n');
		cin >> n;
	}
	return n;
}