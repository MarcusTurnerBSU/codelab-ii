#include <iostream>
using namespace std;

int main() {

	cout << "How many elemetns do you want to add" << endl;
	int num;
	cin >> num;

	//allocating enough storage for the user
	int* intPtr = new int[num];
	cout << "Please enter " << num << " elements" << endl;
	for (int i = 0; i < num; i++) {
		cin >> intPtr[i];
	}
	cout << endl;
	cout << "Here are your " << num << " elements" << endl;
	for (int i = 0; i < num; i++) {
		cout << intPtr[i] << endl;;
	}

	delete[] intPtr;

	/*this prints the the address and value
	//int* intPtr = new int(6);
	//cout << intPtr << endl;
	//cout << *intPtr << endl;

	//*intPtr = 22;
	//cout << *intPtr << endl;
	//cout << intPtr << endl;

	//string* strPtr = new string;
	//*strPtr = "Hello";
	//cout << *strPtr << endl;
	//cout << strPtr << endl;
	*/

	/*allocated far away in memory
	int* intPtr2;
	int num1 = 9;
	intPtr2 = &num1;
	cout << intPtr2 << endl;

	//int* intPtr3;
	//int num2 = 19;
	//intPtr = &num2;
	//cout << *intPtr3 << endl;
	*/
	return 0;
}