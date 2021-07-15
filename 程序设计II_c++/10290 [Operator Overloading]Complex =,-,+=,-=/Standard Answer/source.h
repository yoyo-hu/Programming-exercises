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

