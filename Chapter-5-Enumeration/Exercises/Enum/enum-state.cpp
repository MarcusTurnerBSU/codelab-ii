#include <iostream>
using namespace std;

int main() {
	//capitilising "States" is coding convention for enums
	enum States{LOGGED_IN = 3012, LOGGED_OUT = 3032, CONNECTION_ERROR = 4001, FRIEND_PENDING = 7001};

	States state = LOGGED_OUT;

	switch (state) {
	case LOGGED_IN:
		//handle logged in and give access to profile
		break;
	case LOGGED_OUT:
		//limit access
		break;	
	case CONNECTION_ERROR:
		//give warning about poor connection
		break;
	case FRIEND_PENDING:
		//display notification
		break;
	}

	return 0;
}