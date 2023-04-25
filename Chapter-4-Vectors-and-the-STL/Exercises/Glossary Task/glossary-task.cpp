#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {

	char quit = 'Q';
	string input;

	map<string, string> capitals = {
		{"Russia", "Moscow"},
		{"France", "Paris"},
		{"Spain", "Madrid"},
		{"USA","Washington DC"},
		{"Vietnam", "Hanoi"},
	};

	do {
		cout << "input a country: " << endl;
		cin >> input;

		auto finder = capitals.find(input);
		if (finder != capitals.end()) {
			cout << "The capital of that country is: " << capitals[input] << endl;
		}
		else {
			cout << "Hasn't been found" << endl;
		}

		cout << "Would you like to continue? Press any key or Q to quit" << endl;
		cin >> quit;
		quit = toupper(quit);
	} while (quit != 'Q');

	return 0;
}