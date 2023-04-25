#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	string label[4] = { "Name of lecture", "What Day", "Starting Time", "Ending Time" };


	ofstream outFile("timetable.txt");
	string input;
	if (outFile.is_open()) {

		for (int i = 0; i < 4; i++) {
			cout << label[i] << endl;
			getline(cin, input);
			outFile << input << endl;
		}

		/*
		cout << "Name of lecture" << endl;
		getline(cin, input);
		outFile << input << endl;
		cout << "What day" << endl;
		getline(cin, input);
		outFile << input << endl;
		cout << "Starting time" << endl;
		getline(cin, input);
		outFile << input << endl;
		cout << "Ending time" << endl;
		getline(cin, input);
		outFile << input << endl;
		*/
	};

	ifstream inFile("timetable.txt");

	string lecture;
	string day;
	int start;
	int end;

	if (inFile.is_open()) {
		while (!inFile.eof()) {
			getline(inFile, lecture);
			getline(inFile, day);
			inFile >> start;
			inFile >> end;
			cout << lecture << " " << day << " " << start << " " << end << endl;
		}
	}

	return 0;
}