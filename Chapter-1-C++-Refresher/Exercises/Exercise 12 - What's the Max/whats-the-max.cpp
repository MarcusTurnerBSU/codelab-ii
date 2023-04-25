#include <iostream>
using namespace std;

int main() {

	int num1, num2, num3;

	cout << "Please enter three numbers to find out which one is bigger?" << endl;
	cin >> num1 >> num2 >> num3;

	//this is checking if num1 is the biggest then if not check num2, if false num3 is bigger
	int max = (num1 > num2 && num1 > num3) ? num1 : (num2 > num3) ? num2 : num3;
	cout << "You entered the following numbers: " << num1 << ", " << num2 << ", " << num3 << endl;
	cout << "The biggest number is: " << max << endl;

	return 0;
}