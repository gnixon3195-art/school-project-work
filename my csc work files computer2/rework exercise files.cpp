#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int books = 5;
	double price = 12.99;
	char rating = 'A';
	bool instock = true;
	string author = "jane";

	cout << "book details:" << endl;
	cout << "number of books " << books << endl;
	cout << "rating:" << rating << endl;
	cout << "item in stock?" << instock << endl;
	cout << "author of book" << author << endl;

	return 0;
}