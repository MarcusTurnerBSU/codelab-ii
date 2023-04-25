#include <iostream>
using namespace std;

int main() {

	//enum variables are generally uppercased
	enum Seasons { SPRING = 1, SUMMER, AUTUMN, WINTER };

	Seasons season = SPRING;
	//Seasons season2 = WINTER;

	////this outputs the numerically representation
	//cout << season << endl;

	//this is a much better streamlined method 
	switch (season) {
	case SPRING:
		cout << "Spring has sprung" << endl;
		break;
	case SUMMER:
		cout << "Vacation Time" << endl;
		break;
	case AUTUMN:
		cout << "Back to Uni" << endl;
		break;
	case WINTER:
		cout << "Brrr Cold" << endl;
		break;
	}




	return 0;
}