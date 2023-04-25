#include <iostream>
#include <string>
using namespace std;

int main() {

	int userNumber;
	
	cout << "Please enter a whole number to find out if it's Even or Odd: " << endl;
	cin >> userNumber;

	//this ternary operator is checking if user input is even
	string result = (userNumber % 2 == 0) ? "The number you entered is: Even." : "The number you entered is: Odd.";
	cout << result;

	return 0;
}