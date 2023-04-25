#include <iostream>
using namespace std;

int main() {

	string usersWord;
	
	cout << "Please enter a word so The Mad Hatter can reverse it." << endl;
	cin >> usersWord;

	//using the reverse keyword to reverse the word
	reverse(usersWord.begin(), usersWord.end());

	cout << "The Mad Hatter Says: " << usersWord << " in reverse" << endl;

	return 0;
}