#include <iostream>
#include <fstream>
#include <string>
#include <array>
using namespace std;

//creating structure and objects inside
struct Employee {
	string name;
	int age;
	char gender;
	string address;
	string salary;
	
};

//printing all the data
void printEmployee(const Employee& employee);

int main() {

	//placing all the data in this array
	array<Employee, 9> employeeList;
	int count = 0;

	//reading into the file
	ifstream inputFile("../../../../Resources/employeeData.txt");
	
	//checking if file is open
	if (inputFile.is_open()) {
		cout << "Ready to read from file..." << endl;
		cout << endl;
		cout << "Employee information" << endl;

		//going through the file and extracting the data into the right objects
		for (int i = 0; i < employeeList.size(); i++) {
			getline(inputFile, employeeList[i].name, ',');
			inputFile >> employeeList[i].age;
			inputFile.ignore(10, ',');
			inputFile >> employeeList[i].gender;
			inputFile.ignore(10, ',');
			getline(inputFile, employeeList[i].address, ',');
			inputFile.ignore(2, ' ');
			inputFile >> employeeList[i].salary;
			inputFile.ignore(10, '\n');

			//to see how many Jeff's are employeess
			if (employeeList[i].name[0] == 'j' || employeeList[i].name[0] == 'J') {
				count++;
			}
		}

		//close the file after usage
		inputFile.close();
	}
	else {
		cout << "Sorry, file has not been found" << endl;
	}

	//for loop calling my function
	for (auto& emp : employeeList) {
		printEmployee(emp);
	}

	cout << "There are " << count << " employees named Jeff" << endl;

	return 0;
}

//function to print out the relevant data for each employee
void printEmployee(const Employee& employee) {
	cout << "=========================================================================" << endl;
	cout << "Name\t\t" << "Age\t"  "Gender\t\t" <<  "Address\t" <<  "\t\tSalary" << endl;
	cout << employee.name << "\t" << employee.age << "\t" << employee.gender << "\t" << employee.address << "\t\t" << char(156) << employee.salary << endl;
	cout << endl;
}