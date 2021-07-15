#include <vector>
#include <numeric>
#include <iostream>
#include<cstdlib>
#include "COMPLEX.h"
using namespace std;

COMPLEX::COMPLEX(double r, double i){
	real=r, image=i;
}
COMPLEX::COMPLEX(const COMPLEX &other){
	real=other.real, image=other.image;
}
void COMPLEX::print(){
	if(image==0){
		cout<<real;
	}
	else{
		if(real!=0)
			cout<<real;
		if(image>0)
			cout << '+';
		cout << image << 'i';
	}
	cout << endl;
}
COMPLEX COMPLEX::operator+(const COMPLEX &other){
	COMPLEX result;
	result.image = image + other.image;
	result.real= real + other.real;
	return result;
}
COMPLEX COMPLEX::operator-(const COMPLEX &other){
	COMPLEX result;
	result.image = image - other.image;
	result.real= real - other.real;
	return result;
}
COMPLEX COMPLEX::operator-(){
	COMPLEX result;
	result.image = -image ;
	result.real= -real ;
	return result;
}
COMPLEX COMPLEX::operator=(const COMPLEX &other){
	real=other.real, image=other.image;
	return *this;
}
COMPLEX &COMPLEX::operator++(){
	++real, ++image;
	return *this;
}
COMPLEX COMPLEX::operator++(int){
	COMPLEX temp = *this;
	++real, ++image;
	return temp;
}
COMPLEX &COMPLEX::operator--(){
	--real, --image;
	return *this;
}
COMPLEX COMPLEX::operator--(int){
	COMPLEX temp = *this;
	--real, --image;
	return temp;
}