#include <iostream>
using namespace std;

int main() {

	//declaring the enum class and adding enumnators
	enum class DaysOpen { MONDAY = 1, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY };
	int input;

	do {
		cout << "Welcome to Jake's Beer Emporium. To find out the opening times, please enter (1 - 7 or 0)"
			"\n1: Monday\t2: Tuesday\t3: Wednesday\t4: Thursday\n5: Friday\t6: Saturday\t7: Sunday\t0: to Quit" << endl;
		cin >> input;
		input = toupper(input);
		//switch statement is taking users input and enums have numerically representation once cast, will match enum value
		switch (static_cast<DaysOpen>(input)) {
		case DaysOpen::MONDAY:
			cout << "Our shop is closed on Mondays, sorry!\n" << endl;
			break;
		case DaysOpen::TUESDAY:
			cout << "Our shop opens at 11am on Tuesday\n" << endl;
			break;
		case DaysOpen::WEDNESDAY:
			cout << "Our shop opens at 11am on Wednesday\n" << endl;
			break;
		case DaysOpen::THURSDAY:
			cout << "Our shop opens at 11am on Thursday\n" << endl;
			break;
		case DaysOpen::FRIDAY:
			cout << "Our shop opens at 11am on Friday\n" << endl;
			break;
		case DaysOpen::SATURDAY:
			cout << "Our shop opens at 11am on Saturday\n" << endl;
			break;
		case DaysOpen::SUNDAY:
			cout << "Our shop opens at 11am on Sunday\n" << endl;
			break;
		default: 
			cout << "That is an incorrect input\n" << endl;
			break;
		}

	} while (input != 0);

	cout << "You have left Jake's Beer Emporium, hope you come back soon!" << endl;

	return 0;
}