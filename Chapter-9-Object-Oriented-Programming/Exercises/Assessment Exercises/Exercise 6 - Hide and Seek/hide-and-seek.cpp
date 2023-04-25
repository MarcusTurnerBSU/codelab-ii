#include <iostream>
#include <string>
using namespace std;

//student class object
class Student {
	//automatically set to private
	string name;
	int number;

public:
	//SETTERS - assigning passed in values to data members 
	void setName(string name) {
		this->name = name;
	}
	void setNumber(int number) {
		this->number = number;
	}

	//GETTERS - returning data members back to the program
	string getName() {
		return name;	
	}
	int getNumber() {
		return number;
	}
};

int main() {

	//creating student object
	Student student1;
	//using setter methods to assign values
	student1.setName("Marcus");
	student1.setNumber(394969);

	//using getter methods to retrieve and output data
	cout << "Student name is: " << student1.getName() 
		<< "\nStudent number is: " << student1.getNumber() << endl;

	return 0;
}