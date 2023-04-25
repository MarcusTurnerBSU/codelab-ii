#include <iostream>
#include <array>
#include <time.h>
#include <algorithm>
using namespace std;

int main() {

	int a;
	array<int, 1000> nums;

	//set random seed
	srand(time(NULL));

	for (int i = 0; i < nums.size(); i++) {
		//get random number between 1 and 100
		nums[i] = rand() % 100 + 1;
	}

	sort(nums.begin(), nums.end());
	for (int j = 0; j < nums.size(); j++) {
		cout << nums[j] << endl;
	}

	//need three parameters in count
	a = count(nums.begin(), nums.end(), 6);
	cout << a;

	return 0;
}