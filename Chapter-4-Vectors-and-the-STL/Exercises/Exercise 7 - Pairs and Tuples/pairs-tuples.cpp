#include <iostream>
#include <tuple>
using namespace std;

int main() {

	//declaring the pair
	pair<string, int> footballTeam;
	//initalising the pair
	footballTeam.first = "Yeovil Town";
	footballTeam.second = 18;
	//outputting the pair
	cout << "The football team name is: " << footballTeam.first 
		<< " and they are " << footballTeam.second << "th in the league." << endl;

	//declaring and initalising the tuple
	auto cityInfo = make_tuple("Bath", 8, 12);
	string city;
	double temp;
	int windSpeed;
	//unpacking the tuple and enables us to get values and assign them to other variables
	tie(city, temp, windSpeed) = cityInfo;
	//outputting the tuple
	cout << "The name of the city is: " << city << ", the temperature is: " << temp 
		<< char(248) << "C and the wind speed is: " << windSpeed << " mph." << endl;

	return 0;
}