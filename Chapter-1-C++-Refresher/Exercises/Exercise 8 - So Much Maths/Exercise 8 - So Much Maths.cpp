#include <iostream>
using namespace std;

int main() {

	int num1, num2, addition, subtraction, times, division, remainder;

	cout << "Please enter two numbers: " << endl;
	cin >> num1 >> num2;

	addition = num1 + num2;
	cout << "\nThe addition of " << num1 << " and " << num2 << " is: " << addition << endl;

	subtraction = num1 - num2;
	cout << "\nThe subtraction of " << num1 << " and " << num2 << " is: " << subtraction << endl;

	times = num1 * num2;
	cout << "\nThe multiplication of " << num1 << " and " << num2 << " is: " << times << endl;

	division = num1 / num2;
	cout << "\nThe division of " <<  num1 << " and " << num2 << " is: " << division << endl;

	remainder = num1 % num2;
	cout << "\nThe remainder of " << num1 << " and " << num2 << " is: " << remainder << endl;

	return 0;
}