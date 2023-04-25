#include <iostream>
#include <map>
using namespace std;

int main() {

	int input;
	//declaring and initialising a map
	map<int, string> students = {
		{394969, "Marcus Turner"},
		{123456, "John Smith"},
		{987654, "Jane Doe"},
		{567890, "John Doe"},
		{654321, "Jane Smith"}
	};

	cout << "check to see if the student number is activated" << endl;
	cin >> input;

		//finder is looking inside students and seeing if users input matches a student
		auto finder = students.find(input);
		if (finder != students.end()) {
			cout << "The student number " << finder->first << " is associated with: " << finder->second << endl;
		}
		else {
			cout << "This number is not associated with anyone, sorry." << endl;
		}

	return 0;
}