#include <iostream>
using namespace std;

int main() {

	int angles[3];

	cout << "Please enter 3 angles." << endl;
	for (int i = 0; i < 3; i++) {
		cout << "Number " << i + 1 << ": ";
		cin >> angles[i];
	}

	int triangle = 0;
	//this is adding up all 3 inputs from the user
	for (int i = 0; i < 3; i++) {
		triangle += angles[i];
	}

	cout << "Your three angles are: " << angles[0] << ", " << angles[1] << ", " << angles[2] << ".\n";

	//this checks if the traingle equals to 180
	if (triangle == 180) {
		cout << "Well done, that is a Triangle!" << endl;
		//this is checking if all the angles are 60
		if (angles[0] == 60 && angles[1] == 60 && angles[2] == 60) {
			cout << "All the angles are the same, so this is an Equilateral Triangle." << endl;
		}
		//this is checking if two angles are the same
		else if (angles[0] == angles[1] || angles[0] == angles[2] || angles[1] == angles[2]) {
			cout << "Two angles are the same, so this is an Isosceles Triangle." << endl;
		}
		//this is checking if no angles are the same
		else {
			cout << "None of the angles are the same, so this is a Scalene Triangle." << endl;
		}
	}
	else {
		cout << "The numbers do not add up to 180, this can't be a Triangle." << endl;
	}

	return 0;
}