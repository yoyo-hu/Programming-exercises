// Problem#: 17888
// Submission#: 4698430
// The source code is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
// URI: http://creativecommons.org/licenses/by-nc-sa/3.0/
// All Copyright reserved by Informatic Lab of Sun Yat-sen University
#include<iostream>
using namespace std;
class Complex {
 public:
  Complex(): real(0), imag(0) {}
  Complex(int a, int b): real(a), imag(b) {}
  int getReal() const {
   return real;
  }
  int getImag() const {
   return imag;
  }
  Complex operator+(const Complex &s) {
   return Complex(real+s.getReal(), imag+s.getImag());
  }
  Complex operator=(const Complex &s) {
   real=s.getReal();
   imag=s.getImag();
  }
  Complex operator-(const Complex &s) {
   return Complex(real-s.getReal(), imag-s.getImag());
  }
  Complex operator+=(const Complex &s) {
   real+=s.getReal();
   imag+=s.getImag();
  }
  Complex operator-=(const Complex &s) {
   real-=s.getReal();
   imag-=s.getImag();
  }
 private:
  int real;
  int imag;
};

