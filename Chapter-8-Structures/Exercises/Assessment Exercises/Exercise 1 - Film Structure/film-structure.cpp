#include <iostream>
#include <string>
#include <array>
#include <fstream>
using namespace std;

//creating the structure and objects inside
struct Films {
	string title;
	string director;
	int year;
	int runtime;
};

//a function to print the films
void printFilm(const Films& films);

int main() {

	//creating a file
	ofstream outputFile("films-info.txt");
	//checks if the file is open
	if (outputFile.is_open()) {
		cout << "File is ready for users input" << endl;
		cout << "=============================" << endl;
		//temp variable for storage
		string input;
		for (int i = 0; i < 5; i++) {
			cout << "Input the title of film " << i + 1 << ": " << endl;
			getline(cin, input);
			outputFile << input << "\t";
			cout << "Input the director of film " << i + 1 << ": " << endl;
			getline(cin, input);
			outputFile << input << "\t";
			cout << "Input the year film " << i + 1 << " was made: " << endl;
			cin >> input;
			outputFile << input << "\t";
			cout << "Input the runtime of film " << i + 1 << " in minutes:" << endl;
			cin >> input;
			outputFile << input << endl;
			//stops the enter key from being passed into the title object
			cin.ignore(10, '\n');
		}
		//close file after use
		outputFile.close();
	}
	else {
		cout << "File has not been found" << endl;
	}

	//an standard library array to store all the film data for each film
	array<Films, 5> filmsList;

	//reading into the file just created
	ifstream inputFile("films-info.txt");

	if (inputFile.is_open()) {
		cout << "Ready to read from file..." << endl;
		cout << "=================================" << endl;
		cout << "Film information for each Film" << endl;
		//running a for loop to get the users input and store it, in the right object
		for (int i = 0; i < filmsList.size(); i++) {
			getline(inputFile, filmsList[i].title, '\t');
			getline(inputFile, filmsList[i].director, '\t');
			inputFile >> filmsList[i].year, '\t';
			inputFile >> filmsList[i].runtime;
			//stops the enter key from being passed into the title object
			inputFile.ignore(10, '\n');
		}
		cout << endl;
		inputFile.close();
	}
	else {
		cout << "Sorry, file doesn't exist" << endl;
	}

	////range based for loop outputting all of the data
	for (auto& film : filmsList) {
		printFilm(film);
	}

	return 0;
}

//setting out the format of the users input by using a print function
void printFilm(const Films& films) {
	cout << "Film info" << endl;
	cout << "==================================" << endl;
	cout << "Film Title: " << films.title << endl;
	cout << "Film Director: " << films.director << endl;
	cout << "Film Year: " << films.year << endl;
	cout << "Film Runtime: " << films.runtime << endl;
	cout << endl;
}