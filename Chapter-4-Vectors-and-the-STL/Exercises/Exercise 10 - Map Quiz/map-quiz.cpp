#include <iostream>
#include <map>
using namespace std;

int main() {

	//declaring and initialising a map
	map<string, string> stateQuiz {
		{"Q1: What are the initals for California?", "CA"}, 
		{"Q2: What are the initals for Florida?", "FL"}, 
		{"Q3: What are the initals for New York?", "NY"},
		{"Q4: What are the initals for Minnesota?", "MN"},
		{"Q5: What are the initals for Missouri?", "MO"},
		{"Q6: What are the initals for Nevada?", "NV"},
		{"Q7: What are the initals for Delaware?", "DE"},
		{"Q8: What are the initals for Connecticut?", "CT"},
		{"Q9: What are the initals for Colorado?", "CO"},
	};

	int rightAnswer = 0;
	string input;

	//running through the map and if the use enters the correct answer, they score a point
	for (auto& i : stateQuiz) {
		cout << i.first << endl;
		cin >> input;
		if (input == i.second) {
			rightAnswer += 1;
		}
	}

	//how many points the user scored, size method is used in case the map changes in size
	cout << "You guessed: " << rightAnswer << " answers correctly out of " << stateQuiz.size() << endl;

	return 0;
}