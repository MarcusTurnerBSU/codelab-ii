#include <iostream>
#include <vector>
#include <array>
#include <string>
using namespace std;

int main() {

	vector<string> myStringVec(100, "Hello");
	cout << myStringVec.at(66) << endl;

	//vector then data type, finally variable name
	vector<int> myIntVec = { 1, 8, 9, 30, 43 };
	cout << "Orginal Values (5)" << endl;
	for (int n : myIntVec) {
		cout << n << endl;
	}
	cout << endl;

	//can change the amount of elements
	myIntVec = { 1, 89, 76 };
	cout << "Orginal Values (3)" << endl;
	for (int n : myIntVec) {
		cout << n << endl;
	}
	//will keep the 3 elements but will have 7 more elements
	myIntVec.resize(10);
	cout << "Orginal Values (10)" << endl;
	for (int n : myIntVec) {
		cout << n << endl;
	}

	//this prints 30
	//cout << myIntVec[3] << endl;

	/*
	this prints 10 6's
	vector<int> myVec(10, 6);
	for (int n : myVec) {
		cout << n << endl;
	}
	*/

	/*
	this will 10 elements
	vector<int> myVec(10);
	*/

	return 0;
}