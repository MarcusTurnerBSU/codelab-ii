#include <iostream>
using namespace std;

int main() {

	int num;

	do {
		cout << "Please enter any number but 5" << endl;
		cin >> num;

	} while (num != 5);

	cout << "Hey, you weren't meant to enter 5" << endl;

	return 0;
}