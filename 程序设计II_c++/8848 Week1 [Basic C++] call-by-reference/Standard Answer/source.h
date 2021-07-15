// Problem#: 17680
// Submission#: 4639413
// The source code is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
// URI: http://creativecommons.org/licenses/by-nc-sa/3.0/
// All Copyright reserved by Informatic Lab of Sun Yat-sen University
#include <iostream>
using namespace std;
int addxy(int,int,int);
int subxy(int&a,int&b,int&c);

int addxy(int a, int b, int c) {
	c = a + b;
	cout << "Total from inside addxy: " << c << endl;
}

int subxy(int&a,int&b,int&c) {
	c = a - b;
	cout << "Total from inside subxy: " << c << endl;
}
