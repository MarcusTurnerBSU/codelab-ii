#include <iostream>
#include <string>
using namespace std;

int main() {

	string name, location;
	int age;

	cout << "Please enter your full name, age and location in that order?" << endl;
	//this captures everything the user has entered
	getline(cin, name);
	cin >> age >> location;
	
	//this is capitialising the first letter of name and location
	name[0] = toupper(name[0]);
	location[0] = toupper(location[0]);
	//if the user enters a space for their surname, the for loop finds it and capitialising the first letter after the space 
	for (int i = 0; i < name.length(); i++) {
		if (name[i] == ' ') {
			name[i + 1] = toupper(name[i + 1]);
			break;
		}
	}

	cout << "Your Name is: " << name << "\nYour Age is: " << age << "\nYour Hometown is: " << location << endl;

	return 0;
}