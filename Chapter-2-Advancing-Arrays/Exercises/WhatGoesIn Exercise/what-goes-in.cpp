#include <iostream>
using namespace std;

int main() {

	int num[5];

	//passed by reference
	for (auto &n : num) {
		cin >> n;
	}
	cout << endl;
	cout << "Here's your 5 nums" << endl;
	for (const auto &n : num) {
		cout << n;
	}

	//cout << "Input 5 nums" << endl;
	//for (int i = 0; i < 5; i++) {
	//	cin >> num[i];
	//}

	//cout << endl;
	//cout << "Here's your 5 nums" << endl;
	//for (int i = 0; i < 5; i++) {
	//	cout << num[i] << endl;
	//}

	return 0;
}