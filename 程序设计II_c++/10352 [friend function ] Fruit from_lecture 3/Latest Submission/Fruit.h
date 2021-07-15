#ifndef Fruit_H
#define Fruit_H
#include <iostream>
using namespace std;

class Fruit
{
public:
	Fruit();

	friend ostream& operator << (ostream& out, const Fruit& x);
	friend istream& operator >> (istream& in,  Fruit& x);

private:
	string name, color;
};

#endif
