#include <iostream>
using namespace std;

//this won't get modified
void logMessage(const string &msg) {
	//msg = "billy"; this doesn't work because msg can not be changed
	cout << msg << endl;
}

void logMessage(string msg) {
	cout << msg << endl;
}

//example of declaring and defining
double checkout(double item, double money);

//I want the address of the variable
void stringModder(string &str) {
	str = "Hello";
	cout << "String is Function is: " << str << endl;
}

int main() {



	//this prints Jake
	string myString = "Jake";
	stringModder(myString);
	cout << "String in main is: " << myString << endl;





	/*
	double coffee = 2.49;

	cout << "A coffee is "<< char(156) << coffee << " how much money do you have?" << endl;
	double userMoney;
	cin >> userMoney;

	if (coffee > userMoney) {
		cout << "GET THE HELL OUT OF MY SHOP" << endl;
	}
	else {
		userMoney = checkout(coffee, userMoney);
		cout << "Enjoy your coffee. You have " << userMoney << " left" << endl;
	}
	*/




	/*
	logMessage("Hello");
	logMessage("This is a function");
	logMessage("This is the information I want to output");
	string name = "jake";
	logMessage(name);
	*/

	return 0;
}

//example of declaring and defining
double checkout(double item, double money) {
	return money - item;
}