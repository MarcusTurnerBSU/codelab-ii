#include <iostream>
using namespace std;

int main() {

	int* max = 0;

	//asking the user how many elements they want and taking their input
	cout << "Please enter how many elements you want" << endl;
	int num;
	cin >> num;

	cout << endl;

	//allocating memory for the users inputs
	int* intPtr = new int[num];

	cout << "Please enter " << num << " elements" << endl;
	//user is inputting their values
	
	for (int i = 0; i < num; i++) {
		cout << "Element number " << i + 1 << ": ";
		cin >> intPtr[i];
		
		//finding the max value
		max = intPtr;
		if (intPtr[i] > *max) {
			*max = intPtr[i];
		}
	}
	cout << endl;
	cout << "The max element in your array is: " << *max << endl;

	//deleting the pointer to prevent any memory leaks
	delete[] intPtr;

	return 0;
}