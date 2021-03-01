#pragma once
#include <string>

using namespace std;

class Matrix {
private:
	string name;
	int number;
	double count;
	double price;
public:
	string getName() const {return name; }
	int getNumber() const {return number; }
	double getCount() const {return count; }
	double getPrice() const {return price; }
	void setName(string);
	bool setNumber(int);
	bool setCount(double);
	bool setPrice(double);
	double getAllSum() const {return count * price; }
	bool Init(string name, int number, double count, double price);
	void Read();
	void Display();
};

