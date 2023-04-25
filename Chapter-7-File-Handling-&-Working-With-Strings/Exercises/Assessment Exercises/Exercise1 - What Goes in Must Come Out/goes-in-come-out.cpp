#include <iostream>
//access the library to work with file handling
#include <fstream>
#include <string>
using namespace std;

string formatString(string str);
void outputMsg(string msg);
//functions for checking respective data types
bool stringCheck(string str);
bool intCheck(string str);

int main() {

	//creating a file and writing into it
	ofstream outputFile("bio.txt");
	//checking if the file is open
	if (outputFile.is_open()) {
		outputMsg("File ready for users data");
		outputMsg("==================================");
		outputMsg("Please enter your name");
		//storing all inputs locally
		string input;
		getline(cin, input);
		//while input does is invalid, keep checking until valid
		while (!stringCheck(input)) {
			outputMsg("Try again, only letters can be inputted");
			getline(cin, input);
		}
		//capitalise first letters of each word in input
		input = formatString(input);
		outputFile << input << endl;

		outputMsg("Please enter your age");
		cin >> input;
		while (!intCheck(input)) {
			outputMsg("Try again, only numbers can be inputted");
			cin >> input;
		}
		outputFile << input << endl;
		
		outputMsg("Please enter your hometown");
		cin.ignore(10, '\n');
		getline(cin, input);
		while (!stringCheck(input)) {
			outputMsg("Try again, only letters can be inputted");
			getline(cin, input);
		}
		input = formatString(input);
		outputFile << input;

		//closing the file
		outputFile.close();
	}
	else {
		outputMsg("Sorry, could not access file");
	}

	//reading into the file
	ifstream inputFile("bio.txt");
	//variables to assign user input 
	string name;
	string hometown;
	int age;
	if (inputFile.is_open()) {
		outputMsg("\nReady to read from file...");
		outputMsg("==================================");
		outputMsg("Your Bio");
		//keeps checking while it's not at the end of the file
		while (!inputFile.eof()) {

			getline(inputFile, name);
			inputFile >> age;
			inputFile.ignore(10, '\n');
			getline(inputFile, hometown);
			
			cout << name << endl;
			cout << age << endl;
			cout << hometown;
		}
		//closing the file
		inputFile.close();
	}
	else {
		outputMsg("Sorry, Error opening file...");
	}
	
	return 0;
}

//improving UX by checking users string and capitialising first letters
string formatString(string str) {
	str[0] = toupper(str[0]);
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == ' ') {
			str[i + 1] = toupper(str[i + 1]);
		}
	}
	return str;
}

//outputs messages to the user
void outputMsg(string msg) {
	cout << msg << endl;
}

//returns true if the whole string contains alphabetically values
bool stringCheck(string str) {
	for (int i = 0; i < str.length(); i++) {
		//checking if str is not alphabetically and a space
		if (!isalpha(str[i]) && !isspace(str[i])) {
			return false;
		}
	}
	return true;
}

//returns true if the whole string contains numerically values
bool intCheck(string str) {
	for (int i = 0; i < str.length(); i++) {
		//checking if str is not numerically
		if (!isdigit(str[i])) {
			return false;
		}
	}
	return true;
}
