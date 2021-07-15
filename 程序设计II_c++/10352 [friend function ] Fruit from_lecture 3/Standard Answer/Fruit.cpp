#include "Fruit.h"
#include <iostream>
#include<cstring>
Fruit::Fruit()
{
	name = "apple";
	color = "green";
}
ostream& operator << ( ostream& out, const Fruit& x)
{
	out  << x.name <<" "<<x.color << endl;

	return out;
}

istream& operator >> (istream& in, Fruit& x)
{
	in >> x.name;
	in >> x.color;

	return in;
}
