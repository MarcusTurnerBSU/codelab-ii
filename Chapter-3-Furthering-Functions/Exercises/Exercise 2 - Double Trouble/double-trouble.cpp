#include <iostream>
using namespace std;

int doubleFunction(int num);

int main() {

	int usersNum;

	cout << "Please enter a number to be doubled." << endl;
	cin >> usersNum;

	//a call to double users input
	doubleFunction(usersNum);

	return 0;
}

//this function takes one argument and returns the result
int doubleFunction(int num) {
	int sum;

	sum = num * num;
	cout << "Your number doubled is: " << sum << endl;

	return num;
}