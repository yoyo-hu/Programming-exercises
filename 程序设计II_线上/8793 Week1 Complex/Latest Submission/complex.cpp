#include "check.h"
#include <iostream>
#include <math.h>
#include "complex.h"
using std::cin;
using std::cout;
using std::endl;
Complex::Complex(){
    r = 0;
    i = 0;
    cout << "Create an empty complex." << endl;
}
Complex::Complex(int r_, int i_){
    r = r_;
    i = i_;
    cout << "Create an complex whose real is " << r <<", image is " << i << "." << endl;
}
Complex::~Complex(){
    cout<<"Destroy an complex whose real is "<< r <<", image is " << i << "." << endl;
}
double Distanceof(const Complex& c1, const Complex& c2){
    int distanceofr =c1. r - c2.r;
    int distanceofi = c1.i - c2.i;
    return pow(distanceofr * distanceofr + distanceofi * distanceofi, 0.5);
}