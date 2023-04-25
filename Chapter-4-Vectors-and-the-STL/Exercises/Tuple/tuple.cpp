#include <iostream>
#include <tuple>
using namespace std;

tuple<string, int, char> returnStudent() {
	auto student = make_tuple("Bob Biggins", 34532, 'A');
	return student;
}

int main() {


	tuple<string, int, string> employee("Jake Hobbs", 32, "BA15");
	//auto student = make_tuple("Bob Biggins", 34532, 'A');

	//this prints out "Jake Hobbs"
	cout << get<0>(employee) << endl;

	string name;
	int number;
	//char grade;
	char grade = 'F';
	tie(name, number, ignore) = returnStudent();
	//tie(name, number, grade) = returnStudent();

	cout << "Name: " << name << " Student No: " << number << " Grade: " << grade << endl;

	return 0;
}