#include <iostream>
#include <array>
using namespace std;

int main() {

	//storing the array into a standard array input
	array<int, 5> numbers;

	cout << "Please enter five numbers to be stored into an array" << endl;

	for (int& num : numbers) {
		cin >> num;
		while (cin.fail())
		{
			//this is checking if the user hasn't entered a number
			cout << "Please enter an integer" << endl;
			cin.clear();
			cin.ignore(1000, '\n');
			cin >> num;
		}
	}
	for (int& num : numbers) {
		cout << num << ", ";
	}

	return 0;
}