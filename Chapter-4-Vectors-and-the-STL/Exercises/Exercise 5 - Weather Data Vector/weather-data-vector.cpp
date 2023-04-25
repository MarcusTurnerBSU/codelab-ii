#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	vector<string> city = { "Bath", "Barcelona" };
	vector<int> temp1(7);
	vector<int> temp2(7);
	int sum1 = 0;
	int sum2 = 0;

	cout << "Enter temperatures in Bath and Barcelona for the last week.\n";
	cout << "==========================================================" << endl;

	//if user is inputting into the Bath or Barcelona column
	for (int i = 0; i < city.size(); i++) {
		if (i == 0) {
			cout << "\nBath\n-----------" << endl;
		}
		else {
			cout << "\nBarcelona\n-----------" << endl;
		}

		for (int j = 0; j < 7; j++) {
			if (i == 0) {
				cout << "Day " << j + 1 << ": ";
				cin >> temp1[j];
			}
			else {
				cout << "Day " << j + 1 << ": ";
				cin >> temp2[j];
			}
		}
	}

	cout << "\nBath and Barcelona Temperatures" << endl;
	cout << "======================================" << endl;
	
	//going through the vector and outputting to the user
	for (int i = 0; i < city.size(); i++) {
		if (i == 0) {
			cout << "\nBath\n-------------" << endl;
		}
		else {
			cout << "\n\nBarcelona\n-------------" << endl;
		}

		for (int j = 0; j < 7; j++) {
			if (i == 0) {
				cout << "Day " << j + 1 << " = " << temp1[j] << " " << endl;
				sum1 += temp1[j];
			}
			else {
				cout << "Day " << j + 1 << " = " << temp2[j] << " " << endl;
				sum2 += temp2[j];
			}
		}
	}

	cout << "\nLowest, Highest and Average Temperatures" << endl;
	cout << "========================================\n" << endl;

	//sorting the inputs for Bath numerically and outputting the first and last
	sort(temp1.begin(), temp1.end());
	cout << "Bath Lowest Temperature: " << temp1.front() << "\nBath Highest Temperature: " 
		<< temp1.back() << "\nBath Average Temperature: " << sum1 / 7 << endl;

	//sorting the inputs for Barcelona numerically and outputting the first and last
	sort(temp2.begin(), temp2.end());
	cout << "\nBarcelona Lowest Temperature: " << temp2.front() << "\nBarcelona Highest Temperature: " 
		<< temp2.back() << "\nBarcelona Average Temperature: " << sum2 / 7 << endl;

	cout << "\nLowest, Highest and Average Temperatures Combined" << endl;
	cout << "=================================================\n" << endl;

	//IF statements checking which city had the highest and lowest temperatures
	if (temp1.front() < temp2.front()) {
		cout << "Bath had the lowest temperature with: " << temp1.front()  << endl;
	}
	else if (temp1.front() == temp2.front()) {
		cout << "Bath and Barcelona both had the same lowest temperature with: " << temp1.front() << endl;
	}
	else {
		cout << "Barcelona had the lowest temperture with: " << temp2.front() << endl;
	}

	if (temp1.back() > temp2.back()) {
		cout << "Bath had the highest temperature with: " << temp1.back() << endl;
	}
	else if (temp1.back() == temp2.back()) {
		cout << "Bath and Barcelona both had the same highest temperature with: " << temp2.back() << endl;
	}
	else {
		cout << "Barcelona had the highest temperature with: " << temp2.back() << endl;
	}

	//outputting the average for both cities
	cout << "The Overall Average temperature for Bath and Barcelona is: " << (sum1 + sum2) / 14 << endl;

	return 0;
}