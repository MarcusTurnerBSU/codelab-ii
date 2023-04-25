#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	vector<string> shoppingList = { "Milk", "Bread", "Coffee" , "Tea", "Sugar", "Bananas", "Apples", "Milk", "Coffee" };

	//sorting the elements in alphabetical order
	sort(shoppingList.begin(), shoppingList.end());

	//finding any consecutive elements and assigning them to the 'itr' variable
	auto itr = unique(shoppingList.begin(), shoppingList.end());

	//removing the 'itr' variable
	shoppingList.erase(itr, shoppingList.end());

	//outputting the new list without any duplicates
	for (int i = 0; i < shoppingList.size(); i++) {
		cout << shoppingList[i] << " ";
	}

	return 0;
}