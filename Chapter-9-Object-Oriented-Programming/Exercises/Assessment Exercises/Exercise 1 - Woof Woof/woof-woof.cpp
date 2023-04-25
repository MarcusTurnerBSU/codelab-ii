#include <iostream>
#include <string>
using namespace std;

//class of a dog and it's characteristics
class Dog {
public:
	string name;
	string breed;
	string gender;
	int weight = 0;
	int age = 0;

	//used to print the dog's info
	void printInfo() {
		cout << "Name is: " << name << endl;
		cout << "Breed is: " << breed << endl;
		cout << "Gender is: " << gender << endl;
		cout << "Weight is: " << weight << endl;
		cout << "Age is: " << age << endl;
	}
	//class method to output the name of the dog
	void sayWoof() {
		cout << "Woof Woof, I am " << name << " and the oldiest dog" << endl;
	};
//creating two dog objects
}dog1, dog2;

int main() {

	//assigning values and ouptting data members
	cout << "Dog Information" << endl;
	cout << "==============================" << endl;
	dog1.name = "Luna";
	dog1.breed = "Labrador Retriever";
	dog1.gender = "Female";
	dog1.weight = 27;
	dog1.age = 6;
	dog1.printInfo();

	cout << endl;

	dog2.name = "Bella";
	dog2.breed = "Dachshund";
	dog2.gender = "Female";
	dog2.weight = 9;
	dog2.age = 4;
	dog2.printInfo();

	cout << endl;

	//checking which dog is older and calling the sayWoof method
	if (dog1.age > dog2.age) {
		dog1.sayWoof();
	}
	else {
		dog2.sayWoof();
	}

	return 0;
}