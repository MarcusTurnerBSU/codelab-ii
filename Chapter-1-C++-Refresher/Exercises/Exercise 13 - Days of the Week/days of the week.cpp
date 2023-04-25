#include <iostream>
using namespace std;


int main() {

	int userInput;

	cout << "Please enter a number between (1 - 7) to find out what day of the week it is? " << endl;
	cin >> userInput;

	//evaluates the users input and assigns to a case
	switch (userInput)
	{
	case 1: 
		cout << "Monday is the first day of the week." << endl;
		break;
	case 2:
		cout << "Tuesday is the second day of the week." << endl;
		break;
	case 3:
		cout << "Wednesday is the third day of the week." << endl;
		break;
	case 4:
		cout << "Thursday is the fourth day of the week." << endl;
		break;
	case 5:
		cout << "Friday is the fifth day of the week." << endl;
		break;
	case 6:
		cout << "Saturday is the sixth day of the week." << endl;
		break;
	case 7:
		cout << "Sunday is the seventh day of the week." << endl;
		break;
	default:
		cout << "That is an incorrect choice." << endl;
	}

	return 0;
}