#include <iostream>
using namespace std;

int main() {

	string temperatures[7][2];

	for (int i = 0; i < 2; i++) {
		cout << "Enter city: " << endl;
		//cin >> temperatures[i];
		for (int j = 0; j < 7; j++) {
			cout << "Enter the temperature on day " << j + 1 << ": " << endl;;
			cin >> temperatures[i][j];
			
		}
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 7; j++) {
			cout << temperatures[i][j];
		}
	}

	return 0;
}