#include "Exchange.h"
#include <iostream>
#include<cstdlib>
using namespace std;


void Exchange::operator()(int& x, int& y)
{
	int t;
	t = x;
	x = y;
	y = t;
}


