#include <iostream>
using namespace std;

int main() {

	int num1, num2, num3;

	cout << "Please enter your 3 numbers: " << endl;
	cin >> num1 >> num2 >> num3;

	//cout message may not fit on others screen so condensed for readability
	cout << "\nYour numbers forward:\n" << num1 << "\n" << num2 << "\n" << num3 << "\n"
		<< "\nYour numbers reversed:\n" << num3 << "\n" << num2 << "\n" << num1 << endl;
 
	return 0;
}