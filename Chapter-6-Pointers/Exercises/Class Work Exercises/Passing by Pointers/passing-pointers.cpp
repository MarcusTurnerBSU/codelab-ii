#include <iostream>
using namespace std;

//this is passing by value
//void stringMod(string msg) {
//	msg = "Code is cool";
//	cout << "String in function is: " << msg << endl;
//}

//this is passing by reference
//void stringMod(string &msg) {
//	msg = "Code is cool";
//	cout << "String in function is: " << msg << endl;
//}

//this is passing by pointer
void stringMod(string* msg) {
	*msg = "Code is cool";
	cout << "String in function is: " << *msg << endl;
}

int main() {

	//this is needed for passing by reference and value
	/*string word = "Hello";
	stringMod(word);
	cout << "String in main is: " << word << endl;*/

	//this is needed for passing by pointer
	string word = "Hello";
	stringMod(&word);
	cout << "String in main is: " << word << endl;


	return 0;
}