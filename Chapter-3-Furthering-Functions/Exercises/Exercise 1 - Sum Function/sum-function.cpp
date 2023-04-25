#include <iostream>
using namespace std;

//declaring function
int sumFunction(int n1, int n2);

int main() {

	int num1, num2;
	
	cout << "Please Enter two values to be added together" << endl;
	cin >> num1 >> num2;

	//the function is called and gets the sum from the numbers entered by the user
	sumFunction(num1, num2);
	
	return 0;
}

//this function takes two arguments and returns the total sum
int sumFunction(int n1, int n2) {

	int sum;
	sum = n1 + n2;
	
	cout << "Your first number is: " << n1 << "\nYour second number is: " << n2 << "\n\nThe total sum is: " << sum << endl;

	return sum;
}