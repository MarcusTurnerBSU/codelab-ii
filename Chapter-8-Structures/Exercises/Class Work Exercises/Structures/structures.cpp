#include <iostream>
#include <string>
using namespace std;

struct Book {
	string title;
	string author;
	double price;
	int pages;
};

int main() {

	Book book1;
	book1.title = "Harry Potter";
	book1.author = "JK Rowling";
	book1.price = 3.45;
	book1.pages = 567;

	Book book2;
	book2.title = "Dictionary";
	book2.author = "Mr Oxford";
	book2.price = 10;
	book2.pages = 1000;

	cout << "Book Info" << endl;
	cout << "=========" << endl;
	cout << "Title: " << book1.title << endl;
	cout << "Author: " << book1.author << endl;
	cout << "Price: " << book1.price << endl;
	cout << "Pages: " << book1.pages << endl;
	cout << endl;
	cout << "Book Info" << endl;
	cout << "=========" << endl;
	cout << "Title: " << book2.title << endl;
	cout << "Author: " << book2.author << endl;
	cout << "Price: " << book2.price << endl;
	cout << "Pages: " << book2.pages << endl;
	return 0;
}