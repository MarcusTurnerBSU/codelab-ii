#include <iostream>
#include <tuple>
#include <map>
#include <string>
using namespace std;

int main() {

	//maps output numerically and alphabetically 
	map<string, string> capitals{
		{"England", "London"},
		{"Wales", "Cardiff"},
		{"France", "Paris"},
	};

	capitals["Italy"] = "Rome";
	capitals.insert(make_pair("Germany", "Berlin"));
	capitals.erase("Wales");

	//find method will return the iterator if found
	auto finder = capitals.find("England");
	//can't find 'Spain' so will print the else statement
	auto finder = capitals.find("Spain");
	if (finder != capitals.end()) {
		cout << "The capital of England is " << capitals["England"] << endl;
	}
	else {
		cout << "Sorry that is not in our database" << endl;
	}
	/*int score = 0;
	for (auto& c : capitals) {
		cout << "What is The capital of " << c.first << endl;
		string input;
		getline(cin, input);
		if (input == c.second) {
			score += 10;
		}
		else {
			score -= 10;
		}
	}
	cout << "You scored: " << score << endl;*/

	return 0;
}