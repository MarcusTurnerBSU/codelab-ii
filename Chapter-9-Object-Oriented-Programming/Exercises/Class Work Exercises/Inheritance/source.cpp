#include <iostream>
#include "animals.h"
using namespace std;

int main() {

	Dog dog1("Fido", 2, 5.6, "Collie");
	Cat cat1("Felix", 7, 3.4, "Tabby");
	Bird bird1("Donald", 3, 4.5, "Budgie");

	dog1.eat();
	dog1.move();
	dog1.speak();
	dog1.jump();
	cout << endl;

	cat1.eat();
	cat1.move();
	cat1.speak();
	cat1.jump();
	cout << endl;

	bird1.eat();
	bird1.move();
	bird1.speak();
	bird1.jump();
	cout << endl;

	dog1.die();
	cat1.die();
	bird1.die();
}