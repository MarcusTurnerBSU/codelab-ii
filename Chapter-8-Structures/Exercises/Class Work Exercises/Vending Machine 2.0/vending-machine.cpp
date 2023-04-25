#include <iostream>
#include <string>
#include <array>
using namespace std;

struct Products {
	string name;
	double price;
	string desc;
	int stock;
};

void printGoods(const Products& p) {
	cout << p.name << " - " << p.price << " - " << p.desc << " - " << p.stock << endl;
}

int main() {

	array<Products, 5> stuff{ {
		{"Mars", 1.49,"Snack",6},
		{"Quavers",1.99,"Crisps",4},
		{"Panini",1.29,"Sandwich",1},
		{"Coke",1.19,"Drink",4},
		{"Crab",3.00,"Crab",9}
	} };
	int input;
	double monee;

	cout << "The Omnissiah has goods if you have coin" << endl;

	for (int i = 0; i < stuff.size(); i++) {
		cout << i + 1 << ": ";
		printGoods(stuff[i]);
	}

	cout << "which one you want" << endl;
	cin >> input;
	input--;

	cout << "giv monee" << endl;
	cin >> monee;
	if (monee >= stuff[input].price) {
		cout << "Here is " << stuff[input].name << " and " << monee - stuff[input].price << " change" << endl;
		stuff[input].stock--;
	}
	else {
		cout << "begone peasant" << endl;
	}


	return 0;
}