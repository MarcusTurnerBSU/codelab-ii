#include <iostream>
using namespace std;

int main() {

	enum class TrafficLight{RED, GREEN, YELLOW};
	enum class Colour{RED, GREEN, YELLOW};

	enum class Animal {DOG, CAT, CHICKEN};

	//tLight and pet is now considered are two different data types
	//have to use'::' because enum class is strong typed
	TrafficLight tLight = TrafficLight::YELLOW;
	Animal pet = Animal::CHICKEN;

	//can't pass an int to an enum class, need to 'static_cast<Seasons>(input))
	//can't directly output enum class like you can with an enum - it needs 'static_cast' in the cout

	return 0;
}