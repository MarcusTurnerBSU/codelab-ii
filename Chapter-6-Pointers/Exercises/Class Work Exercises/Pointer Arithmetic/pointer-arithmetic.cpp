#include <iostream>
using namespace std;

int main() {

	string snacks[5] = { "Egg", "Banana", "Pie", "Nuts", "Milk" };
	string* strPtr = snacks;
	string* endPtr = snacks + 5;

	//this outputs the whole snacks array
	while (strPtr != endPtr) {
		cout << *strPtr << endl;
		strPtr++;
	}

	/*
	* this prints out Nuts
	strPtr += 3;
	cout << *strPtr << endl;
	*/




	/*
	cout << snacks << endl;
	cout << *snacks << endl;
	cout << snacks[0] << endl;
	cout << *(snacks + 2) << endl;
	cout << snacks[2] << endl;
	*/

	return 0;
}