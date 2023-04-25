#include <iostream>
using namespace std;

int main() {

	for (int i = 1; i <= 100; i++) {
		//this is checking if i is a multiple of 3 and 5
		if (i % 3 == 0 && i % 5 == 0) {
			cout << "FizzBuzz" << endl;
		}
		//this is checking if i is a multiple of 3
		else if (i % 3 == 0) {
			cout << "Fizz" << endl;
		}
		//this is checking if i is a multiple of 5
		else if (i % 5 == 0) {
			cout << "Buzz" << endl;
		}
		//every other number is left the same
		else {
		cout << i << endl;
		}
	}
	
	return 0;
}