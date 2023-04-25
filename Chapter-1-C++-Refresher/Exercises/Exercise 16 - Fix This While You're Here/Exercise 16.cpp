//syntax error - the iostream needs to be inside angled brackets to allow us to access the standard library
#include <iostream> 
//std is needed here, this let the complier know we are using the standard namespace
using namespace std; 

int main() {
	int counter = 0;
	//camelCase error - first word of the variable must be lowercase and first letter of every other word is uppercase
	char endNow = 'N'; 

	//variable name needs to match variable declared at the top of main and needs two '&&' for the AND operator
	while (endNow != 'Y') 
	{
		//syntax error - for insertion, needs to be '<<' and needs a '\' for the newline to work also the space isn't needed
		cout << "Counter: " << counter << "\n";     
		//needs insertion inputted correctly and an "endl" to add a new line for the users input
		cout << "Do you want to end the loop now? Enter (Y: Yes/ N: No):" << endl; 
		//syntax error - for extraction, needs to be ">>" and camelCasing is wrong. Needs to match the variable name
		cin >> endNow;
		//the toupper method takes the user input and capitalises their input so the user doesn't have to put a capital 'Y' or 'N'
		endNow = toupper(endNow);
		//the cin.ignore method will ignore any other input by the user until they press the enter key
		cin.ignore(1000, '\n');
		//added an if statement so if the user inputs the wrong character, they're informed the right options 
		if (endNow != 'Y' && endNow != 'N') {
			cout << "Invalid. Please enter 'Y' for yes and 'N' for no." << endl;
		}
		else {
			//for incrementing, need to use '++' and this needs a ';' to let the complier know it's reached the end of the command
			counter++; 
		}
	}

	return 0;
}