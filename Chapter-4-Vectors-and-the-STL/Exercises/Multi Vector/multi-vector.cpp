#include <iostream>
#include <vector>
#include <array>
#include <string>
using namespace std;

int main() {

	vector<string> country = { "England", "France", "Germany" };
	vector<vector<string> > teamList = {
		{"Newcastle", "Man City", "Southampton", "Man Utd"},
		{"PSG", "Metz", "Monaco", "Lyon"},
		{"Bayern", "Hannover", "Koln", "Dortmund"}
	};

	country.push_back("Spain");
	teamList.insert(teamList.end(), { "Barcelona", "Real Madrid", "Valencia", "Athletico" });

	for (int i = 0; i < country.size(); i++) {
		cout << country[i] << endl;
		for (int j = 0; j < teamList[0].size(); i++) {
			cout << teamList[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}

