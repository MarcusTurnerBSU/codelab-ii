#include <iostream>
#include <string>
using namespace std;

// parent class
class Shape {
//protected data accesible to subclasses
protected:
	int height;
	int width;
public:
	//ensures the correct function is called
	virtual void calcArea() {
		int area = height * width;
		//I know rectangle is the only shape calling this function
		cout << "The area of the rectangle is: " << area << endl;
	}
};

//circle subclass
class Circle: public Shape {
	int radius;
public:
	const double pi = 3.14159265;
	//overrides the Shape calcArea function, avoids shortcuts
	void calcArea() {
		int area = pi * radius * 2;
		cout << "The area of the circle is: " << area << endl;
	}
};

//rectangle subclass
class Rectangle: public Shape {
public:
};

//triangle subclass
class Triangle: public Shape {
public:
	//overrides the Shape calcArea function, avoids shortcuts
	void calcArea() {
		int area = (height * width) / 2;
		cout << "The are of the triangle is: " << area << endl;
	}
};

int main() {

	return 0;
}