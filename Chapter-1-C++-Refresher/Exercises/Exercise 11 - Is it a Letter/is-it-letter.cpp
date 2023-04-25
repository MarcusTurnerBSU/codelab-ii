#include <iostream>
using namespace std;

int main() {

	char input;

	cout << "input a character." << endl;
	cin >> input;

	//passing the value from input to letter
	const char *letter = (isalpha(input)) ? "This is a letter of the alphabet." : "This is not a letter of the alphabet.";
	cout << letter << endl;

	return 0;
}