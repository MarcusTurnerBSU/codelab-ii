#include <iostream>
using namespace std;

int main() {
	//storing an string and double
	pair<string, double> product("Pear", 0.59);
	//storing an int and string
	auto person = make_pair(32, "Jake Hobbs");
	//cout << "Product Name: " << product.first << " Product Price: $" << product.second << endl;

	pair<string, double> products[3] = {
		{"Eggs", 0.99}, {"Mars", 0.10}, {"Panini", 2.99}

	};

	cout << "Welcome to my Vending Machine" << endl;
	cout << "Here are my products" << endl;
	for (auto& item : products) {
		cout << item.first << " $" << item.second << endl;
	}

	return 0;
}