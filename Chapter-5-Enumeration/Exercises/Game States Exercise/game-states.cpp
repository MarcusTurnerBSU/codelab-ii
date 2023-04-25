#include <iostream>
#include <time.h>
using namespace std;

int main() {

	enum GameStates { MENU, PLAYING, PAUSED, GAME_OVER };
	//set random seed
	srand(time(NULL));
	GameStates state = MENU;
	char input;
	int lives = 5;


	do {
		switch (state) {
			case MENU:
				//option 1 for playing state
				//Press 1 to Play or Q to quit
				cout << "Press 1 to play or Q to quit" << endl;
				cin >> input;
				input = toupper(input);
				if (input == '1') {
					state = PLAYING;
				}
				break;
			case PLAYING:
				int num = rand() % 100 + 1;
				cout << "Here is your number! " << num << endl;
				if (num % 2 == 1) {
					lives--;
				}

				//generate random number
				cout << "Playing the game" << endl;
				//if odd -> lose life -> check lives -> GAME_OVER
				cout << "Press 1 to continue, 2 to pause the game, or Q to end the game" << endl;
				cin >> input;
				input = toupper(input);
				if (input == '2') {
					state = PAUSED;

				}

				break;
			case PAUSED:
				cout << "You've paused the game, press 1 to continue or press Q to quit" << endl;
				cin >> input;
				if (input == 'Q') {
					state = GAME_OVER;

				}

			case GAME_OVER:
				cout << "The game is over, thank you for playing" << endl;
				//print out you have no lives
				break;

			default:

		}
	} while (input != 'Q');
			//state = GAME_OVER;

			return 0;

}