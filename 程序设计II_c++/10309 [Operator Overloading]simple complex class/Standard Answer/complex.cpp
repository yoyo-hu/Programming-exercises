#include "complex.hpp"
#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

complex::complex() {}

complex::complex(int real, int imag) {
  this->real = real;
  this->imag = imag;
}

complex::~complex() {}

double complex::getModuli() const {
  return sqrt(pow(double(this->real), 2.0) + pow(double(this->imag), 2.0));
}

void complex::display() const {
  if (!(this->real == 0 && this->imag != 0)) {
    cout << this->real;
  }
  cout << ((this->imag > 0 && this->real != 0)? "+" : "");
  if (this->imag != 0) {
    cout << this->imag;
  }
  cout << (this->imag == 0? "" : "i");
}

complex operator + (const complex& a, const complex& b) {
  complex temp(a.real + b.real, a.imag + b.imag);
  return temp;
}

complex operator - (const complex& a, const complex& b) {
  complex temp(a.real - b.real, a.imag - b.imag);
  return temp;
}