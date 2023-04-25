#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main() {

	int nums[7] = { 15, 2, 6, 11, 12, 13, 9 };

	//this is storing the max value, although it can change in the for loop
	int max = nums[1];

	for (int i = 1; i < 7; i++) {
		//this is checking if the index is a multiple and 2 and if the index is currently greater than the max value
		if (nums[i] % 2 == 0 && nums[i] > max) {
			//then assign the max value to max
			max = nums[i];
		}
	}

	cout << "The biggest number in the array is: " << max << endl;

	return 0;
}