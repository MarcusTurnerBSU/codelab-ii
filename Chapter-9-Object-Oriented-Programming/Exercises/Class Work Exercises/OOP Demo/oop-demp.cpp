#include <iostream>
#include <string>
using namespace std;

class Cat {
public:
	string name;
	string colour;
	int age;
	double weight;

	void sayHello() {
		cout << "Hello my name is: " << name << endl;
	}
	void printInfo() {
		cout << name << endl;
		cout << colour << endl;
		cout << age << endl;
		cout << weight << endl;
	}
};

int main() {

	Cat cat1;
	cat1.name = "Felix";
	cat1.colour = "Black";
	cat1.age = 4;
	cat1.weight = 9.8;

	Cat cat2;
	cat2.name = "Bagpuss";
	cat2.colour = "Pink";
	cat2.age = 60;
	cat2.weight = 11.9;

	cat1.printInfo();
	cat1.sayHello();
	cout << "\n\n" << endl;

	cat2.printInfo();
	cat2.sayHello();

	/*cout << "Cat 1" << endl;
	cout << cat1.name << endl;
	cout << cat1.colour << endl;
	cout << cat1.age << endl;
	cout << cat1.weight << endl;

	cout << "\n\n" << endl;

	cout << "Cat 2" << endl;
	cout << cat2.name << endl;
	cout << cat2.colour << endl;
	cout << cat2.age << endl;
	cout << cat2.weight << endl;*/

	return 0;
}