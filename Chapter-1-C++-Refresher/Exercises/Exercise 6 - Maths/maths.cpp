#include <iostream>
using namespace std;

int main() {

	int x = 10;
	int y = 5;
	
	cout << "x value\ty value\tresults" << endl;
	cout << x << "\t" << y << "\t" << y + 3 << endl; //addition
	cout << x << "\t" << y << "\t" << x - 7 << endl; //subtraction
	cout << x << "\t" << y << "\t" << y * 5 << endl; //multiplication
	cout << x << "\t" << y << "\t" << x / y << endl; //division

	return 0;
}