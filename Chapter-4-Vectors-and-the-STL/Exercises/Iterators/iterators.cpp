#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
using namespace std;

int main() {

	array<int, 4> myIntArr = { 1, 99, 109, 2 };

	int max = *max_element(myIntArr.begin(), myIntArr.end());
	cout << max << endl;

	

	//declaring string and int iterator
	vector<string>::iterator strItr;
	array<int, 4>::iterator intItr;

	array<string, 4> snacks = { "Egg", "Pasty", "Apple", "Mars" };

	auto itr = find(snacks.begin(), snacks.end(), "Pasty");
	if (itr != snacks.end()) {
		cout << "MMmmmm Pasty" << endl;
	}
	else {
		cout << "nooooo pasty" << endl;
	}

	/*
	auto myItr = snacks.begin();
	auto myItr2 = snacks.begin() + 2;

	//dereferencing the iterator to get the value
	cout << *myItr << endl;
	cout << *myItr2 << endl;
	*/

	//slightly quicker to get each iterator
	for (auto itr = snacks.begin(); itr != snacks.end(); itr++) {
		cout << *itr << endl;
	}

	return 0;
}