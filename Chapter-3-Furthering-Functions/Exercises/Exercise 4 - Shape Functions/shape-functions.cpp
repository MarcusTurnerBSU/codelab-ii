#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void squareArea();
void circleArea();
void triangleArea();
void outputMsg(string msg);
void outputMultiParam(string msg, double num);
double inputErrorCheck(double money);

int main() {
	//sets the decimal point to 2
	cout << setprecision(2) << fixed;
	char input;
		
	do {
		//output function statement on two lines for read-ability
		outputMsg("Please enter 1 - 3 or Q for the following options\n1: Calculate the area of a square"
			"\n2: Calculate the area of a circle\n3: Calculate the area of a triangle\nQ: To quit the program");
		cin >> input;
		input = toupper(input);
		
		//this is checking each different outcomes for each case and calling that function
		switch (input) {
		case '1':
			squareArea();
			break;
		case '2':
			circleArea();
			break;
		case '3':
			triangleArea();
			break;
		case 'Q':
			outputMsg("You have left the program, goodbye!");
			break;
		default:
			outputMsg("You have inputted an invalid option.\n");
			break;
		}
	} while (input != 'Q');

	return 0;
}

//this works out the area of the square
void squareArea() {
	outputMsg("You have selected calculating the area of a square\nWhat is the length of a side on your square?");
	double num, area;
	cin >> num;
	num = inputErrorCheck(num);
	area = num * num;
	outputMultiParam("The area of your square is: ", area);
}

//this works out the area of the circle
void circleArea() {
	outputMsg("You have selected calculating the area of a circle\nWhat is the radius of your circle?");
	double num;
	double area;
	double pi = 3.14;
	cin >> num;
	num = inputErrorCheck(num);
	area = pi * num * num;
	outputMultiParam("The area of your circle is: ", area);
}

//this works out the area of the triangle
void triangleArea() {
	outputMsg("You have selected calculating the area of a triangle\nWhat is the height of your triangle: ");
	double height, width, area;
	cin >> height;
	height = inputErrorCheck(height);
	outputMsg("What is the width of your triangle:");
	cin >> width;
	width = inputErrorCheck(width);
	area = (height * width) / 2;
	outputMultiParam("The area of your triangle is: ", area);
}

//this allows me to print out messages to the user 
void outputMsg(string msg) {
	cout << msg << endl;
}

//this allows me take two parameters and prints them out
void outputMultiParam(string msg, double num) {
	cout << msg << num << endl;
}

//this will keep happening until users input is a double, although accept an int as well
double inputErrorCheck(double num) {
	while (cin.fail() || cin.peek() != '\n') {
		cout << "Please enter a decimal or whole number" << endl;
		cin.clear();
		cin.ignore(1000, '\n');
		cin >> num;
	}
	return num;
}