#include <iostream>
#include <vector>
using namespace std;

int main() {

	//declaring and initalising the divisions
	vector<string> divisions = { "Division 1", "Division 2", "Division 3", "Division 4" };
	//declaring and initalising the team names
	vector< vector <string> > teamNames = {
		{"Southampton", "Crystal Palace", "Liverpool", "Chelsea", "Arsenal", "Tottenham Hotspur", "Leeds United", "Burnley"},
		{"Portsmouth", "Sunderland", "Rochdale", "Blackpool", "Gillingham", "Ipswich Town", "Swindon Town", "Northampton Town"},
	    { "Basingstoke", "Frome Town", "Highworth Town", "Cirencester Town", "Cinderford Town", "Thatcham Town", "Melksham Town", "Barnstaple Town" },
		{"Newbury", "Maidenhead Town", "Burghfield", "Finchampstead", "Mortimer", "Berks County", "Richings Park", "Wraysbury Village"}
	};
	
	cout << "The four division all have 8 different teams:" << endl;
	cout << "=============================================";
	//outputting the teams in their respective divisions
	for (int i = 0; i < divisions.size(); i++) {
		cout << "\n" << divisions[i] << ":\n" << endl;
		for (int j = 0; j < teamNames[0].size(); j++) {
			cout << teamNames[i][j] << " " << endl;
		}
	}

	cout << "\n=============================================" << endl;
	cout << "Please choose a division (1, 2, 3, 4)" << endl;
	int userInput;
	cin >> userInput;

	//evaluating users input and outputting specific division with their teams
	switch (userInput) {
	case 1:
		for (int j = 0; j < teamNames[0].size(); j++) {
			cout << teamNames[0][j] << endl;
		}
		break;
	case 2:
		for (int j = 0; j < teamNames[0].size(); j++) {
			cout << teamNames[1][j] << endl;
		}
		break;
	case 3:
		for (int j = 0; j < teamNames[0].size(); j++) {
			cout << teamNames[2][j] << endl;
		}
		break;
	case 4:
		for (int j = 0; j < teamNames[0].size(); j++) {
			cout << teamNames[3][j] << endl;
		}
		break;
	}

	/*
	vector<string> divisions = { "Division 1", "Division 2", "Division 3", "Division 4" };
	//tried to use the pair keyword but not able to print them out effectively
	vector<pair<string, int> > teamNames = {
		{"Southampton", 5}, {"Crystal Palace", 13}, {"Liverpool", 1}, {"Chelsea", 7}, {"Arsenal", 9}, {"Tottenham Hotspur", 3}, {"Leeds United", 12}, {"Burnley", 20},
		{"Portsmouth", 7}, {"Sunderland", 6}, {"Rochdale", 16}, {"Blackpool", 12}, {"Gillingham", 13}, {"Ipswich Town", 2}, {"Swindon Town", 20}, {"Northampton Town", 17},
		{"Basingstoke", 3}, {"Frome Town", 9}, {"Highworth Town", 8}, {"Cirencester Town", 1}, {"Cinderford Town", 14}, {"Thatcham Town", 15}, {"Melksham Town", 18}, {"Barnstaple Town", 19},
		{"Newbury", 7}, {"Maidenhead Town", 5}, {"Burghfield", 8}, {"Finchampstead", 1}, {"Mortimer", 2}, {"Berks County", 3}, {"Richings Park", 11}, {"Wraysbury Village", 4}
	};

	for (int i = 0; i < divisions[0].size(); i++) {
		cout << divisions[i] << ": ";
		for (int j = 0; j < teamNames[0].size(); j++) {
			cout << teamNames[j].first << " ";
		}
	}
	*/

	//this was used for reference when trying to alter my program and take it further
	/*
	vector<string> divisions = { "Division 1", "Division 2", "Division 3", "Division 4" };
	vector<string> teamNames = {
		{"Southampton", "Crystal Palace", "Liverpool", "Chelsea", "Arsenal", "Tottenham Hotspur", "Leeds United", "Burnley"},
		{"Portsmouth", "Sunderland", "Rochdale", "Blackpool", "Gillingham", "Ipswich Town", "Swindon Town", "Northampton Town"},
		{"Basingstoke", "Frome Town", "Highworth Town", "Cirencester Town", "Cinderford Town", "Thatcham Town", "Melksham Town", "Barnstaple Town"},
		{"Newbury", "Maidenhead Town", "Burghfield", "Finchampstead", "Mortimer", "Berks County", "Richings Park", "Wraysbury Village"}
	};

	for (int i = 0; i < divisions[0].size(); i++) {
		cout << divisions[i] << ": ";
		for (int j = 0; j < teamNames[0].size(); j++) {
			cout << teamNames[j].first << " ";
		}
	}
	//declaring and initalising the positions
	//tried running a for loop through the postions to output with the team names
	vector< vector <int> > teamPos = {
		{5, 13, 1, 7, 9, 3, 12, 20},
		{7, 6, 16, 12, 13, 2, 20, 17},
		{3, 9, 8, 1, 14, 15, 18, 19},
		{7, 5, 8, 1, 2, 3, 11, 4}
	};
	*/

	return 0;
}