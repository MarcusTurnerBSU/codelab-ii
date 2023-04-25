//couldn't work out how to find each column to begin find the average for each column
#include <iostream>
using namespace std;

int main() {

	double firstRow = 0;

	double numbers[2][5] = {
	{4.2, 6.3, 1.2, 7.8, 2.9},
	{5.6, 0.8, 0.1, 6.4, 3.2}
	};

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 5; j++) {
			firstRow += numbers[i][j];
			//prints out all the variables
			cout << numbers[i][j] << ", ";
		}
	}
	//prints out all numbers added together
	cout << firstRow << endl;

	return 0;
}