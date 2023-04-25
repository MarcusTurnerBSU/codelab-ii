#include <iostream>
using namespace std;

int main() {

	{//scope starts
		unique_ptr<int> myPtr = make_unique < int>(10);
		cout << "memory address " << myPtr << endl;
		cout << *myPtr << endl;
	}//scope ends - memory will get deleted

	/*unique_ptr<int> myPtr = make_unique < int>(10);
	cout << "memory address " << myPtr << endl;
	cout << *myPtr << endl;*/

	unique_ptr<string> strPtr;
	{//scope starts here
		strPtr = make_unique<string>("Woah Pointers!");
		cout << "memory address: " << strPtr << endl;
	}//scope ends

	//defined in the main function - have access in the scope
	cout << "memory address: " << strPtr << endl;
	cout << *strPtr << endl;
	*strPtr = "Omg this is soo cool :)";
	cout << *strPtr;

	return 0;
}