#include <iostream>
#include <string>
#include "Numbers.h"
using namespace std;

int numCheck(int num);

int main() {

	//temp variables
	int tempNum1 = 0, tempNum2 = 0;
	cout << "Enter your first number" << endl;
	tempNum1 = numCheck(tempNum1);

	cout << "Enter your second number" << endl;
	tempNum2 = numCheck(tempNum2);
	
	//creating an object, userInput and pushing the values into the constructor and then the class method
	Numbers userInput(tempNum1, tempNum2);
	
	cout << endl;
	cout << "The sum of your two numbers are: " << userInput.sumTotal() << endl;

	return 0;
}


//ensuring the user has inputted an integer
int numCheck(int num) {
	cin >> num;
	//cin.peek has a look what is entered first and not extracting the input. Enter key does NOT pass through the stream  
	while (cin.fail() || cin.peek() != '\n') {
		cout << "Invalid input, must be a whole number" << endl;
		cin.clear();
		cin.ignore(1000, '\n');
		cin >> num;
	}
	//ignores leftover enter key
	cin.ignore();
	return num;
}