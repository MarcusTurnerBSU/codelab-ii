#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	//creating an empty string vector
	vector<string> ShoppingList;

	//adding the ingredients to the list and outputting the list
	ShoppingList.insert(ShoppingList.end(), { "eggs", "milk", "sugar", "chocolate", "flour" });
	cout << "The shopping list is: ";
	for (int i = 0; i < ShoppingList.size(); i++) {
		cout << ShoppingList[i] << " ";
	}
	cout << endl;

	//sorting the list in alphabetical order and outputting the list
	cout << "\nThe shopping list is now is alphabetical order: ";
	sort(ShoppingList.begin(), ShoppingList.end());
	for (int i = 0; i < ShoppingList.size(); i++) {
		cout << ShoppingList[i] << " ";
	}
	cout << endl;

	//removing first element in the list and outputting the list
	cout << "\nThe first element has been removed: ";
	ShoppingList.erase(ShoppingList.begin());
	for (int i = 0; i < ShoppingList.size(); i++) {
		cout << ShoppingList[i] << " ";
	}
	cout << endl;

	//adding "coffee" to the front of the list and outputting the list
	cout << "\nCoffee has been added to the front of the list: ";
	//if only one element is being added don't have to use scope/'{}'
	ShoppingList.insert(ShoppingList.begin(), "coffee");
	for (int i = 0; i < ShoppingList.size(); i++) {
		cout << ShoppingList[i] << " ";
	}
	cout << endl;

	//finding "sugar", replacing with "honey" and outputting the list
	auto itr = find(ShoppingList.begin(), ShoppingList.end(), "sugar");
	if (itr != ShoppingList.end()) {
		cout << "\nSugar has been found in the shopping list ";
	}
	else {
		cout << "\nSugar has not been found in the shopping list ";
	}
	cout << endl;
	*itr = "honey";
	cout << "Honey has replaced Sugar in the shopping list: ";
	for (int i = 0; i < ShoppingList.size(); i++) {
		cout << ShoppingList[i] << " ";
	}
	cout << endl;

	//adding "baking powder" before "milk" and outputting the list
	ShoppingList.insert(ShoppingList.begin() + 3, "baking powder");
	cout << "\nBaking powder has been added in front of milk in the shopping list: ";
	for (int i = 0; i < ShoppingList.size(); i++) {
		cout << ShoppingList[i] << " ";
	}

	return 0;
}