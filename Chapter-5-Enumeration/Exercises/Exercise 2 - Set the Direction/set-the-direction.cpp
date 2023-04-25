#include <iostream>
using namespace std;

int main() {

	enum Directions { UP, DOWN, LEFT, RIGHT };
	char input;

	do {

		cout << "Please enter (W to move up, A to move left, S to move down, D to move right or Q to quit)" << endl;
		cin >> input;
		input = toupper(input);
		Directions dir;
		//a switch statement to evaluate the users input
		switch (input) {
		//if 'W' is entered, UP is assigned to upwards
		case 'W':
				cout << "The player has moved upwards\n" << endl;
				dir = UP;
			break;
		//if 'S' is entered, DOWN is assigned to downwards
		case 'S':
				cout << "The player has moved downwards\n" << endl;
				dir = DOWN;
			break;
		//if 'A' is entered, LEFT is assigned to leftDir
		case 'A':
				cout << "The player has moved to the left\n" << endl;
				dir = LEFT;
			break;
		//if 'D' is entered, RIGHT is assigned to rightDir
		case 'D':
				cout << "The player has moved to the right\n" << endl;
				dir = RIGHT;
			break;
		//if 'Q' is entered, the user leaves the program
		case 'Q':
			/* the while condition is checking the same thing but I have 
			this here so the default condition doesn't get outputted */
				cout << "\nYou have exited the program" << endl;
			break;
		default:
				cout << "That is an incorrect input\n" << endl;
			break;
		}

	} while (input != 'Q');

	return 0;
}