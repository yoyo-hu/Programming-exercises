#include <iostream>
#include "complex.hpp"
#include <cmath>
using namespace std;
        complex::complex(int r,int i){
            real=r;
            imag = i;
        }
        void complex::display() const{
            if(imag==0){
                cout<<real;
            }
            else{
                if(real!=0){
                    cout<<real;
                    if(imag>=0)
                        cout<<"+";
                }
                cout<<imag<<'i';
            }
            //cout << endl;
        }
        //print the complex with this form like 3 + 4i, if the real part and the imaginary part both are 0, you need to print 0;
        double complex::getModuli() const{
            return pow(real * real + imag * imag, 0.5);
        }
        //like the function's name, you need to return the moduli of the complex
        complex complex::operator+(complex&other){
            complex sum(real + other.real, imag + other.imag);
            return sum;
        }
        complex complex::operator-(complex&other){
            complex diff(real - other.real, imag - other.imag);
            return diff;
        }
        //overload "+" and "-"