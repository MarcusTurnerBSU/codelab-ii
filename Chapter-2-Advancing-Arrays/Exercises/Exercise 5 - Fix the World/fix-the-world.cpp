#include <iostream>
using namespace std;

int main() {

	char letters[]{ 'I', 'f', 'm', 'm', 'p', '!', 'X', 'p', 's', 'm', 'e' };
	for (auto i : letters) {
		//this is minimising the ascii value by 1
		i -= 1;
		//this is printing Hello World
		cout << i;
	}

	return 0;
}