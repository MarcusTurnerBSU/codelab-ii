#include <iostream>
#include <vector>
using namespace std;

int main() {

	//creating the int vector
	vector<int> intVector = { 5, 23, 57, 68, 19, 3, 43, 72, 42, 76 };
	
	//these are placeholders are min and max 
	int min = intVector[0];
	int max = intVector[0];

	cout << "The numbers in the list are: ";
	//outputting the list
	for (int i = 0; i < intVector.size(); i++) {
		cout << intVector[i] << " ";

		//changing the new min and max value if the if statements are true
		if (intVector[i] < min) {
			min = intVector[i];
		}
		if (intVector[i] > max) {
			max = intVector[i];
		}
	}
	cout << endl;
	//this is outputting the highest and lowest value
	cout << "\nThe smallest number is: " << min << "\nThe biggest number is: " << max << endl;

	cout << endl;
	//this is resizing the vector to 20 elements
	intVector.resize(20);
	cout << "The vector has been resized to 20 elements: ";
	for (int num : intVector) {
		cout << num << " ";
	}
	cout << endl;

	//assigning values to the 10 new elements
	intVector.at(10) = 36;
	intVector.at(11) = 84;
	intVector.at(12) = 91;
	intVector.at(13) = 99;
	intVector.at(14) = 76;
	intVector.at(15) = 43;
	intVector.at(16) = 7;
	intVector.at(17) = 67;
	intVector.at(18) = 9;
	intVector.at(19) = 25;
	cout << "\nThe 10 new elements have been assigned: ";
	for (int num : intVector) {
		cout << num << " ";
	}
	cout << endl;

	//pushing two new elements to the back of the list
	cout << "\n2 new elements pushed via the push back method: ";
	intVector.push_back(83);
	intVector.push_back(48);

	for (int num : intVector) {
		cout << num << " ";
	}
	cout << endl;

	//removing two elements at the end of the list
	intVector.pop_back();
	intVector.pop_back();
	cout << "\nRemoving 2 elements via the pop back method: ";
	for (int num : intVector) {
		cout << num << " ";
	}
	cout << endl;
	
	//outputting the first and last element
	cout << "\nThe first element in the list is: " << intVector.front() 
		<< "\nThe last element of the list is: " << intVector.back() << endl;

	cout << endl;

	//clearing, ouputting the size and then checking to see if the vector is empty
	intVector.clear();
	cout << "The size of the vector is: " << intVector.size() << endl;
	//used boolalpha to print out "true" instead of 1
	cout << boolalpha << "Check to see if the vector is empty: " << intVector.empty() << endl;

	return 0;
}