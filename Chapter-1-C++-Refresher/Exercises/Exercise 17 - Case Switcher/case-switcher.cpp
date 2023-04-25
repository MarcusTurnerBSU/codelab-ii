#include <iostream>
using namespace std;

int main() {

	string myString = "CoDeLaB iS gReAt. I lOvE c++";

	//checking every character in the string
	for (int i = 0; i < myString.length(); i++) {
		//checking if a character is uppercase and setting it to lowercase
		if (isupper(myString[i])) {
			myString[i] = tolower(myString[i]);
		}
		//checking if a character is lowercase and setting it to uppercase
		else if (islower(myString[i])) {
			myString[i] = toupper(myString[i]);
		}

	}
	cout << myString << endl;

	return 0;
}