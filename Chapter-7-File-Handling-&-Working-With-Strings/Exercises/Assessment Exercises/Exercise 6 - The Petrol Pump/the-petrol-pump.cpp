#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main() {

	//storing all of the values here
	double litresCost[2][10];
	
	//accessing the file
	ifstream inputFile("../../../../Resources/petrolPump.txt");
	//checking if file is open
	if (inputFile.is_open()) {
		cout << "File has been found and reading into" << endl;
		cout << "====================================" << endl;
		//placing temp values in these variables
		string data;
		stringstream ss;

		//extracting and storing each value into the 'litresCost' array
		for (int i = 0; i < 10; i++) {
			getline(inputFile, data, ' ');
			//i is being inserted into the stringstream
			ss << data;
			//same i is being extracted in the first column of the array
			ss >> litresCost[0][i];
			
			//resetting the stringstream to it's original state
			ss.str("");
			ss.clear();

			getline(inputFile, data);
			ss << data;
			//this i is being extracted into the second column of the array
			ss >> litresCost[1][i];

			ss.str("");
			ss.clear();
		}
		//closing the file
		inputFile.close();
	}
	else {
		cout << "Sorry, file has not been found" << endl;
	}

	//storing the total amount of litres and cost
	double totalLitres = 0;
	double totalCost = 0;
	double perLitre = 0;
	//adding up the values in the two columns
	for (int i = 0; i < 10; i++) {
		totalLitres += litresCost[0][i];
		totalCost += litresCost[1][i] * litresCost[0][i];
		//add if statement here to see if litre is under 48p
		if (litresCost[1][i] < 48) {
			perLitre += litresCost[0][i];
		}
	}

	cout << endl;
	cout << "The overall average price per litre of petrol bought is: " << totalCost / totalLitres << endl;
	cout << "The motorist bought " << perLitre << " litres under 48p per litre" << endl;

	return 0;
}