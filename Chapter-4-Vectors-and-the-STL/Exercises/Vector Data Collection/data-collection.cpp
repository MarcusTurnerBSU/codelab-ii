#include <iostream>
#include <vector>
#include <array>
#include <string>
using namespace std;

int main() {

	vector<int> myIntVec; //variables
	int input = 0;
	int addition = 0;

	do {
		cout << "Giv numb plx" << endl; //request
		cin >> input;
		if (input > 0){
			myIntVec.insert(myIntVec.end(), input); //inserts the input at the end of the vector
		}
	} while (input > 0); //do while loop runs until a negative value is entered

	for (int n : myIntVec) { //runs until it runs out of numbers
		addition = addition + n; //adds the inputs to an extra variable
		cout << n * 2 << " "; //multiplies the bits of the vector
	}
	cout << endl << "Here is it all added up " << addition << endl; //outputs the total

	return 0;
}