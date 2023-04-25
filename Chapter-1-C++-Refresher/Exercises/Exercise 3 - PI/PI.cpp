#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	double pi = 3.14159;
	double radius, circ, area;

	cout << "Please enter the radius of a circle." << endl;
	cin >> radius;

	//the calculations for working out the area and circumference 
	area = pi * radius * radius;
	circ = pi * radius * 2;
	
	cout << "The area of your circle is: " << area << "\nThe circumference is: " << circ << setprecision(2) << fixed << endl;

	return 0;
}