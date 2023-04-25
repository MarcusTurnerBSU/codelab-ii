#include <iostream>
using namespace std;

int main() {

	int x = 10;
	int y = 5;

	cout << "x value\ty value\tresults" << endl;
	cout << x << "\t" << y << "\t" << x + 5 << endl; //addition
	cout << x << "\t" << y << "\t" << x - 3 << endl; //subtraction
	cout << x << "\t" << y << "\t" << y * 50 << endl; //multiplication
	cout << x << "\t" << y << "\t" << x / 2 << endl; //division
	cout << x << "\t" << y << "\t" << 102 % x << endl; //modulus

	return 0;
}