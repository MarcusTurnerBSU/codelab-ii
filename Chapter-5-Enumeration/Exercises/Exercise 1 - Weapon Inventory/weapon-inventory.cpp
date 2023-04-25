#include <iostream>
using namespace std;

int main() {

	//code convention to capitalise first letter of the enumeration name and full capitalisation for enumerator values
	enum WeaponInventory {FISTS, KNIFE, SWORD, GUN};

	//declaring a new variable that re-assigns the 'FISTS' value
	WeaponInventory firstWeapon = FISTS;

	return 0;
}