#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
using namespace std;

int main() {

	vector<string> names = { "Yadiel", "Malachi", "Braylon", "Haiden", "Grant", "Lexi", "Phoenix", "Cassandra", "Kyla", "Leticia", "Jaida", "Saniyah", "Alice", "Arielle","Camila","Marley","Jaelyn","Glenn","Roy","Reagan","Tristian","Tabitha","Dakota","Mike","Jonas","Deven","Ezekiel","Arturo","Kaila","Titus","Cason","Cristian","Marlene","Kenna","Giancarlo","Kamron","Camille","Wally","Bria","Winston","Urijah","Rachel","Ashlee","Hana","Sienna","Keyla","Kaiden","Melody","Roger","Kolton","Miah","Neil","Luis","Salvador","Wade","Josie","Camron","Henry","Amelie","Graham","Amaya","Isai","Alexandria","Caleb","Sophia","Finley","Keegan","Haleigh","Shania","Jacob","Dominic","Isabell","Michelle","Marcus","Silas","Tara","Emma","Kelly","Lena","Antonio","Yamilet","Anika","Madilynn","Sage","Malia","Serenity","Jamison","Sara","Nick","Jaxon","Savanah","Annabel","James","Jaydan","Carina","Jazmin","Aron","Ralph","Selena","Omari","Jamir" };

	auto itr = find(names.begin(), names.end(), "Wally");
	auto itr2 = distance(names.begin(), itr);
	cout << itr2;

	return 0;
}