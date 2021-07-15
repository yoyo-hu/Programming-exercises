#include<iostream>
#include <string>
using namespace std;
int Plus(int i1,int i2){
	cout << "It's from int!" << endl;
	return i1 + i2;
}
double Plus(double i1,double i2){
	cout << "It's from double!" << endl;
	return i1 + i2;
}
string Plus(string i1,string i2){
	i1 += i2;
	cout << "It's from string!" << endl;
	return i1;
}