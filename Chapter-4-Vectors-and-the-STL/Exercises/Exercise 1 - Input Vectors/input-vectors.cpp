#include <iostream>
#include <vector>
using namespace std;

int main() {

	//declaring my vector
	vector<int> intVec;
	int input;

	cout << "Please enter 5 numbers" << endl;

	for (int i = 0; i < 5; i++) {
		cin >> input;
		//this is inserting the users number to the back of intVector
		intVec.insert(intVec.end(), input);
	}

	cout << endl;
	cout << "Your 5 numbers in the vector are: ";

	//vector size method is used to make sure for loop will always know how many times to loop
	for (int i = 0; i < intVec.size(); i++) {
		cout << intVec[i] << " ";
	}

	return 0;
}