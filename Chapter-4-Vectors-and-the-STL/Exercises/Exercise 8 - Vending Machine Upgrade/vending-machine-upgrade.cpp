#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int numCheck(int min, int max);
double moneyCheck(double money);

int main() {

	//setting the decimal point to 2
	cout << setprecision(2) << fixed;

	double money = 0;
	int input;
	//initialising pairs inside 3 different vectors
	vector<pair<string, double> > mainFoods = {
		{"Pizza", 4.99}, {"Fries", 2.99}, {"Chicken Pie", 4.50}, {"Steak Slice", 3.79 }
	};
	vector<pair<string, double> > snacks = {
		{"Crisps", 0.59}, {"Chocolate", 0.99}, {"Sausage Roll", 1.00}, {"Cornish Pasty", 2.29 }
	};
	vector<pair<string, double> > drinks = {
		{"Bottled Water", 1.29}, {"Coke Zero", 3.60}, {"Pepsi Max", 2.50}, {"Cappuccino", 2.50 }
	};

		cout << "Welcome to my Vending Machine... here are my products" << endl;
		cout << "=======================================================================" << endl;
		cout << "The Main Dishes:" << endl;
		//displaying all elements in the 3 different vectors 
		for (auto& item1 : mainFoods) {
			cout << item1.first << " " << char(156) << item1.second << ". ";
		}
		cout << "\n\nThe Snacks:" << endl;
		for (auto& item2 : snacks) {
			cout << item2.first << " " << char(156) << item2.second << ". ";
		}
		cout << "\n\nThe Drinks:" << endl;
		for (auto& item3 : drinks) {
			cout << item3.first << " " << char(156) << item3.second << ". ";
		}
		cout << "\n=======================================================================" << endl;
		cout << "\nWhich option would you like (1: Main Dishes, 2: Snacks, 3: Drinks)" << endl;
		input = numCheck(1, 3);

		//assessing users input and results in the relevant case
		switch (input) {
		case 1:
			cout << "You have selected The Main Dishes\nWhich item would you like?" << endl;
			input = numCheck(1, 4);
			for (int i = 0; i < mainFoods.size(); i++) {
				//checking which item the user has selected
				if (i + 1 == input) {
					input = i;
					cout << "You have selected " << mainFoods[i].first << " and it costs " << char(156) << mainFoods[i].second << endl;
					cout << "Please enter your money" << endl;
					cin >> money;
					//until the user enters the right amount of money, they have to input more
					while (mainFoods[i].second > money) {
						cout << "Please, Enter more money! " << char(156) << mainFoods[i].second - money << endl;
						double tempMoney;
						cin >> tempMoney;
						money += moneyCheck(tempMoney);
					}
					cout << "Enjoy your " << mainFoods[i].first << ". Here is your change " << char(156) << money - mainFoods[i].second << endl;
				}
			}
			break;
		case 2:
			cout << "You have selected The Snacks\nWhich item would you like?" << endl;
			input = numCheck(1, 4);
			for (int i = 0; i < snacks.size(); i++) {
				if (i + 1 == input) {
					cout << "You have selected " << snacks[i].first << " and it costs " << char(156) << snacks[i].second << endl;
					cout << "Please enter your money" << endl;
					cin >> money;
					while (snacks[i].second > money) {
						cout << "Please, Enter more money! " << char(156) << snacks[i].second - money << endl;
						double tempMoney;
						cin >> tempMoney;
						money += moneyCheck(tempMoney);
					}
					cout << "Enjoy your " << snacks[i].first << ". Here is your change " << char(156) << money - snacks[i].second << endl;
				}
			}
			break;
		case 3:
			cout << "You have selected The Drinks\nWhich item would you like?" << endl;
			input = numCheck(1, 4);
			for (int i = 0; i < drinks.size(); i++) {
				if (i + 1 == input) {
					cout << "You have selected " << drinks[i].first << " and it costs " << char(156) << drinks[i].second << endl;
					cout << "Please enter your money" << endl;
					cin >> money;
					while (drinks[i].second > money) {
						cout << "Please, Enter more money! " << char(156) << drinks[i].second - money << endl;
						double tempMoney;
						cin >> tempMoney;
						money += moneyCheck(tempMoney);
					}
					cout << "Enjoy your " << drinks[i].first << ". Here is your change " << char(156) << money - drinks[i].second << endl;
				}
			}
			break;
		default:
			cout << "You have inputted an incorrect option, please try again." << endl;
		}

	return 0;
}

//ensuring the user has put an integer
int numCheck(int min, int max) {
	int num;
	cin >> num;
	//cin.peek has a look what is entered first and not extracting the input. Enter key does NOT pass through the stream  
	while (cin.fail() || num < min || num > max || cin.peek() != '\n') {
		cout << "Invalid, must be between " << min << "-" << max << "." << endl;
		cin.clear();
		cin.ignore(1000, '\n');
		cin >> num;
	}
	//ignores leftover enter key
	cin.ignore();
	return num;
}

//to ensure the user can only input a double
double moneyCheck(double money) {
	//this will keep happening until users input is a double 
	while (cin.fail() || cin.peek() != '\n') {
		cout << "Please, enter at least " << char(156) << "0.01." << endl;
		cin.clear();
		cin.ignore(1000, '\n');
		cin >> money;
	}
	return money;
}