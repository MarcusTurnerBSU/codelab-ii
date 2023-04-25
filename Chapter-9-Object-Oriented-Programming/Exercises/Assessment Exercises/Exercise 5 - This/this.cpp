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

	//creating the constructor with the class data members
	Dog(string name, string breed, string gender, int weight, int age);

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
//declared objects in the main function
};

//defining the constructor with 'this' keyword so when entering data user knows what to enter next 
Dog::Dog(string name, string breed, string gender, int weight, int age) {
	this->name = name;
	this->breed = breed;
	this->gender = gender;
	this->weight = weight;
	this->age = age;
};

int main() {

	//assigning values and ouptting data members
	cout << "Dog Information" << endl;
	cout << "==============================" << endl;
	Dog dog1("Luna", "Labrador Retriever", "Female", 27, 6);
	dog1.printInfo();

	cout << endl;

	Dog dog2("Bella", "Dachshund", "Female", 9, 4);
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