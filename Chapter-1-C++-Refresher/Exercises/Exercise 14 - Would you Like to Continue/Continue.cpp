#include <iostream>
using namespace std;

int main() {

	char userInput;
	int count = 0;

	cout << "Would you like to continue? (Y: Yes/ N: No)" << endl;
	cin >> userInput;

	//this is checking if the user inputs the character 'Y'
	while (userInput == 'Y') {
		cout << "Would you like to continue? (Y: Yes/ N: No)" << endl;
		cin >> userInput;
		//this is incrementing the value of count
		count++;
		//this is checking if user input is not equal to 'Y', if so stop the while loop
		if (userInput != 'Y')
			break;
	}
	cout << "The program executed " << count << " times." << endl;

	return 0;
}