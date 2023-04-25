#include <iostream>
//enables file handling
#include <fstream>
#include <string>
using namespace std;

int main() {

	//accessing the file
	ifstream inputFile("../../../../Resources/sentences.txt");
	//checking if the file is open
	if (inputFile.is_open()) {
		cout << "Ready for reading data" << endl;
		cout << "======================" << endl;
		
		//hold the string that the program will to find
		string str = "Hello my name is Jake Hobbs";
		//hold the value amount of times string appears in the file
		int count = 0;

		//this means while inputFile is not at the end of file
		while (!inputFile.eof()) {
			//passing the values into 'data'
			string data;
			getline(inputFile, data);
			
			//check if the value stored in data is the same as the 'str' string
			if (data.find(str) != string::npos) {
				//increase 'count by' 1
				count++;
			}
		}
		cout << endl;
		cout << "The string 'Hello my name is Jake Hobbs' appears " << count << " times in the file" << endl;

		//closing the file
		inputFile.close();
	}
	else {
		cout << "Sorry, that file cannot been found" << endl;
	}

	return 0;
}