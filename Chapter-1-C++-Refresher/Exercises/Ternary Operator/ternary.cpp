#include <iostream>
using namespace std;

int main() {

	int mark = 78;

	//task for passing and failing
	mark > 40 ? cout << "You've passed" << endl : cout << "You've failed" << endl;
	
	//jake demo - extension for adding a merit
	(mark > 80) ? cout << "It's a merit" << endl : (mark > 40) ? cout << "It's a pass" << endl : cout << "It's a fail" << endl;

	return 0;
}