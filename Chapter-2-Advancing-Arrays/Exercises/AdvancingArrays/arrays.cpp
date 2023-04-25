#include <iostream>
using namespace std;

int main() {
	//auto keyword - the complier works out what data type you are using
	int num = 6;
	auto num2 = 7;
	auto myChar = 'c';
	//auto num3; - this won't work, you have to assign and declare the value if auto is being used
	
	string staff[6] = { "Jake", "John", "Ron", "Lee", "Coral", "Gary" };

	//common for loop we learnt last year
	for (int i = 0; i < 6; i++) {
		cout << staff[i] << endl;
	}
	//to add a gaps in a line of code
	cout << endl;
	//range based for loop - ranges are containers that are stored sequentially
	//syntax - for(declaration : range) {}
	for (string name : staff) {
		cout << name << endl;
	}
	cout << endl;
	//using auto in a range based for loop
	for (auto n : staff) {
		cout << n << endl;
	}

	return 0;
}