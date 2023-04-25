#include <iostream>
using namespace std;

int main() {

	int timesTables[13][13];

	//this is printing the 1-12 times tables up to 12
	for (int i = 1; i < 13; i++) {
		cout << "\n" << i << " times table:\n-----------------" << endl;
		for (int j = 1; j < 13; j++) {
			timesTables[i][j] = i * j;
			cout << i << " * " << j << " = " << timesTables[i][j] << endl;
		}
	}

	return 0;
}