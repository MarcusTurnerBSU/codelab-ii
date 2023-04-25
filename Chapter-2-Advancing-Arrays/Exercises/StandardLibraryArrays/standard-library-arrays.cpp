#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main() {

	//array<int, 5> nums = { 1, 5, 6, 7, 22 }; update array and change 5 to nums.size() in the for loop
	array<int, 6> nums = { 1, 5, 6, 7, 22, 44 };
	
	//cout << nums[0] << endl; //output 1
	//cout << nums.at(0) << endl; //output 1
	//cout << nums.front() << endl; //output 1
	//cout << nums.back() << endl; //output 44

	//by using algorithm header, this sorts the array
	sort(nums.begin(), nums.end());
	reverse(nums.begin(), nums.end());
	cout << "Max value from array is: " << nums.front();

	for (int i = 0; i < nums.size(); i++) {
		cout << nums[i] << endl;
	}

	return 0;
}