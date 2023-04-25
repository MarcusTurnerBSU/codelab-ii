#include <iostream>
#include <string>
using namespace std;

bool question(string question, char answer);
char charErrorCheck(string confirm); //function to check a char input for Y/N questions

int score = 0;
int lives = 3;

array questions[6, 6] = {
	{},
	{},
}


int main() {
	//int score;
	//IF your question were in an array, you could for loop this stuff
	//score += question(....,....);
	//if(question(....) == 1)
		//add to score
	//else
		//decrease lives

	question("The capital of Australia is Sydney, is this statment correct? ", "n");

	question("Mosquitos have 47 teeth, is this statment correct?", "y");

	question("Is it true that Goosebumps are meant to ward off predators?", "y");

	question("Hermes was the Greek god in charge of escorting the dead into the afterlife - is this true?", "y");

	question("The moon does not experience quakes like the Earth, is this correct?", "n"); //No moonquakes are a thing

	question("Does Dr Jake Hobbs have a weird fascination with Ducks?", "y"); //yes YESS!!!!!!!!!!!

	question("Is the National Animal of Scotland a Unicorn?", "y");
	return 0;
}

//This function checks that the user has given a valid char input
char charErrorCheck(string confirm) {
	cout << confirm << endl;
	char choice;
	cin >> choice;
	choice = toupper(choice);
	while (isdigit(choice) || (choice != 'Y' && choice != 'N')) {
		cout << "Invalid input" << endl;
		cout << confirm << endl;
		cin >> choice;
		choice = toupper(choice);
	}
	return choice;
}

bool question(string question, char answer) {
	char userAnswer;
	cout << question << endl << "answer with Y or N:" << endl;
	cin >> userAnswer;

	if (answer == userAnswer) {
		cout << "your answer is correct well done";
		score++;
		//return 1;
	}
	else {
		//return 0;
	}
}