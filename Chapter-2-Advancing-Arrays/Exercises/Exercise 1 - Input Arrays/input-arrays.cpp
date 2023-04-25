#include <iostream>
using namespace std;

int main() {

	int nums[5];

	cout << "Please enter five numbers to be stored into an array" << endl;
		
	//range based for loop is allocating a num inside the nums array
	for (int& num : nums) {
		cin >> num;
		//this is checking if the user hasn't entered a number
		while (cin.fail())
		{
			cout << "Please enter an integer" << endl;
			cin.clear();
			cin.ignore(1000, '\n');
			cin >> num;
		}
	}
	//this is outputting the contents of the array
	for (int& num : nums) {
		cout << num << ", ";
	}

	return 0;
}