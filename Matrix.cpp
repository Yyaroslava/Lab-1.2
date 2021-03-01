#include <iostream>
#include "Matrix.h"

using namespace std;

void Matrix::setName(string value) {
	name = value;
}

bool Matrix::setNumber(int value) {
	if (value > 0) {
		number = value;
		return true;
	}
	else {
		number = 0;
		return false;
	}
}

bool Matrix::setCount(double value) {
	if (value > 0) {
		count = value;
		return true;
	}
	else {
		count = -value;
		return false;
	}
}

bool Matrix::setPrice(double value) {
	if (value > 0) {
		price = value;
		return true;
	}
	else {
		price = -value;
		return false;
	}
}

bool Matrix::Init(string name, int number, double count, double price) {
	setName(name);
	return setNumber(number) && setCount(count) && setPrice(price);
}

void Matrix::Read() {
	string name;
	int number;
	double count;
	double price;
	cout << "Enter the name: "; cin >> name;
	do {
		cout << "Enter the number: "; cin >> number;
		cout << "Enter the count (amount of items): "; cin >> count;
		cout << "Enter the price: "; cin >> price;
	} while (!Init(name, number, count, price));
}

void Matrix::Display() {
	cout << "Name: " << name << endl;
	cout << "Number: " << number << endl;
	cout << "Count(amount of items): " << count << endl;
	cout << "Price: " << price << endl;
}
