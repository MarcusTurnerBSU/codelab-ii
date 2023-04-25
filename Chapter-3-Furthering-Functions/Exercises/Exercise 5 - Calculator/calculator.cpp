#include <iostream>
using namespace std;

int main() {

	int numCheck(int min, int max);
	int inputNumCheck(int num);
	char inputLetterCheck(char letter);
	void displayMenu();
	void addition();
	void subtraction();
	void multiplication();
	void division();
	void modulus();

	int userChoice;
	char quit = 'Q';

	do {
		displayMenu();
		//this is checking users input and making sure it is between 1-5
		userChoice = numCheck(1, 5);

		switch (userChoice) {
		case 1:
			addition();
			cout << "\nWould you like to quit? ('Q' or 'N'): ";
			cin >> quit;
			quit = inputLetterCheck(quit);
			break;
		case 2:
			subtraction();
			cout << "\nWould you like to quit? ('Q' or 'N'): ";
			cin >> quit;
			quit = inputLetterCheck(quit);
			break;
		case 3:
			multiplication();
			cout << "\nWould you like to quit? ('Q' or 'N'): ";
			cin >> quit;
			quit = inputLetterCheck(quit);
			break;
		case 4:
			division();
			cout << "\nWould you like to quit? ('Q' or 'N'): ";
			cin >> quit;
			quit = inputLetterCheck(quit);
			break;
		case 5:
			modulus();
			cout << "\nWould you like to quit? ('Q' or 'N'): ";
			cin >> quit;
			quit = inputLetterCheck(quit);
			break;
		}
	} while (quit != 'Q');
	cout << "You have exited the program." << endl;

	return 0;
}

//ensuring the user has put an integer between 1 - 5 
int numCheck(int min, int max) {
	int num;
	cin >> num;
	//cin.peek has a look what is entered first and not extracting the input. Enter key does NOT pass through the stream  
	while (cin.fail() || num < min || num > max || cin.peek() != '\n') {
		cout << "Invalid, must be between " << min << " - " << max << "." << endl;
		cin.clear();
		cin.ignore(1000, '\n');
		cin >> num;
	}
	//ignores leftover enter key
	cin.ignore();
	return num;
}

//makes sure only numbers can be inputted
int inputNumCheck(int num) {
	while (cin.fail() || cin.peek() != '\n') {
		cout << "Please enter a whole number" << endl;
		cin.clear();
		cin.ignore(1000, '\n');
		cin >> num;
	}

	return num;
}

//checks if user has inputted a char
char inputLetterCheck(char letter) {
	letter = toupper(letter);
	while (letter != 'Q' && letter != 'N') {
		cin.fail() || cin.peek() != '\n';
		cout << "Invalid input (Q or N)" << endl;
		cin.clear();
		cin.ignore(1000, '\n');
		cin >> letter;
		letter = toupper(letter);
	}
	return letter;
}

//this is displaying the options to the user
void displayMenu() {
	cout << "Please enter a number (1 - 5) for the type of calculation?"
		<< "\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulus" << endl;
}


//this is displaying and calulating the addition
void addition() {
	int num1, num2, sum;

	cout << "You have selected addition.\nEnter the two numbers to add them together\nEnter your first number." << endl;
	cin >> num1;
	num1 = inputNumCheck(num1);
	cout << "Enter your second number." << endl;
	cin >> num2;
	num2 = inputNumCheck(num2);
	sum = num1 + num2;
	cout << "The result of the addition is: " << sum << endl;
}

//this is displaying and calulating the subtraction
void subtraction() {
	int num1, num2, sum;

	cout << "You have selected subtraction.\nEnter two numbers for the subtraction calculation\nEnter your first number." << endl;
	cin >> num1;
	num1 = inputNumCheck(num1);
	cout << "Enter your second number." << endl;
	cin >> num2;
	num2 = inputNumCheck(num2);
	sum = num1 - num2;
	cout << "The result of the subtraction is: " << sum << endl;
}

//this is displaying and calulating the multiplication
void multiplication() {
	int num1, num2, sum;

	cout << "You have selected multiplication.\nEnter two numbers to times them together\nEnter your first number." << endl;
	cin >> num1;
	num1 = inputNumCheck(num1);
	cout << "Enter your second number." << endl;
	cin >> num2;
	num2 = inputNumCheck(num2);
	sum = num1 * num2;
	cout << "The result of the multiplication is: " << sum << endl;
}

//this is displaying and calulating the division
void division() {
	int num1, num2, sum;

	cout << "You have selected division.\nEnter two numbers for the division calculation\nEnter your first number." << endl;
	cin >> num1;
	num1 = inputNumCheck(num1);
	cout << "Enter your second number." << endl;
	cin >> num2;
	num2 = inputNumCheck(num2);
	sum = num1 / num2;
	cout << "The result of the division is: " << sum << endl;
}

//this is displaying and calulating the modulus
void modulus() {
	int num1, num2, sum;

	cout << "You have selected modulus.\nEnter two numbers for the modulus calculation\nEnter your first number." << endl;
	cin >> num1;
	num1 = inputNumCheck(num1);
	cout << "Enter your second number." << endl;
	cin >> num2;
	num2 = inputNumCheck(num2);
	sum = num1 % num2;
	cout << "The result of the modulus is: " << sum << endl;
}