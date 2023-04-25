#include <iostream>
#include <string>
#include <array>
//library allows for file handling
#include <fstream>
using namespace std;

//class object
class Employee {
public:
	//data members
	string name;
	int age = 0;
	int id = 0;
	int salary = 0;	

	//function setting employee data to data members 
	void setData(string name, int age, int id, int salary) {
		this->name = name;
		this->age = age;
		this->id = id;
		this->salary = salary;
	}

	//function outputting employee data to the console
	void getData() {
		cout << "Employee Information" << endl;
		cout << "=======================" << endl;
		cout << "Name is: " << name << endl;
		cout << "Age is: " << age << " years old" << endl;
		cout << "ID is: " << id << endl;
		cout << "Salary is: " << char(156) << salary << endl;
		cout << endl;
	}
};

//format users string
string formatString(string str);
//error checking for user string inputs and number inputs
bool stringCheck(string str);
int numCheck(int min, int max, string msg);

int main() {

	array<Employee, 5> employeeList;

	//creating a file
	ofstream outputFile("employee-list.txt");

	//checking if the file is open
	if (outputFile.is_open()) {
		cout << "File has been created" << endl;
		cout << "=============================" << endl;
		for (int i = 0; i < 5; i++) {
			//temp variables for storing temp data
			string tempName;
			int tempAge = 0;
			int tempId = 0;
			int tempSalary = 0;
			cout << "Enter employee number " << i + 1 << "'s name: " << endl;
			getline(cin, tempName);
			while (!stringCheck(tempName)) {
				cout << "Try again, only letters can be inputted" << endl;
				getline(cin, tempName);
			}
			tempName = formatString(tempName);
			outputFile << tempName << "\t";
			cout << "Enter employee number " << i + 1 << "'s age: " << endl;
			tempAge = numCheck(16, 70, "Invalid, must be between 16 - 70");
			outputFile << tempAge << "\t";
			cout << "Enter employee number " << i + 1 << "'s id: " << endl;
			tempId = numCheck(99999, 1000000, "Invalid input, ID takes 6 digits");
			outputFile << tempId << "\t";
			cout << "Enter employee number " << i + 1 << "'s salary: " << endl;
			tempSalary = numCheck(10000, 150000, "Invalid input, must be between 10000 - 150000 pounds");
			outputFile << tempSalary << endl;
		}
		//closing the file
		outputFile.close();
	}
	else {
		cout << "Sorry, file couldn't be created" << endl;
	}

	//opening the file
	ifstream inputFile("employee-list.txt");

	//checks if the file is open
	if (inputFile.is_open()) {
		cout << "The file has been found" << endl;
		cout << "=============================" << endl;
		cout << endl;

		for (int i = 0; i < employeeList.size(); i++) {
			getline(inputFile, employeeList[i].name, '\t');
			inputFile >> employeeList[i].age, '\t';
			inputFile >> employeeList[i].id, '\t';
			inputFile >> employeeList[i].salary;
			employeeList[i].setData(employeeList[i].name, employeeList[i].age, employeeList[i].id, employeeList[i].salary);
			inputFile.ignore(10, '\n');
		}
		//closes the file
		inputFile.close();
	}
	else {
		cout << "Sorry, the file has not been found" << endl;
	}

	for (int i = 0; i < employeeList.size(); i++) {
		//calling the getData with all the data inside the array
		employeeList[i].getData();
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

//ensuring the user has put an integer
int numCheck(int min, int max, string msg) {
	int num;
	cin >> num;
	//cin.peek has a look what is entered first and not extracting the input. Enter key does NOT pass through the stream  
	while (cin.fail() || num < min || num > max || cin.peek() != '\n') {
		cout << msg << endl;
		cin.clear();
		cin.ignore(1000, '\n');
		cin >> num;
	}
	//ignores leftover enter key
	cin.ignore();
	return num;
}