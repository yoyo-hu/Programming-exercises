#include "complex.h"
#include "check.h"
#include <cmath>
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
int Complex::counter=0;
Complex::Complex()
    {
        r = 0;
        i = 0;
        cout << "Create an empty complex."<<endl;
        counter++;
    }
Complex::Complex(int r_, int i_)
    {
        r = r_;
        i = i_;
        cout << "Create an complex whose real is "<<r<<", image is "<<i<<'.'<<endl;
        counter++;
    }
Complex::Complex(const Complex &other)
    {
        r = other.r;
        i = other.i;
        cout << "Copy from an complex whose real is "<<r<<", image is "<<i<<'.'<<endl;
        counter++;
    }
Complex::~Complex()
    {
        cout << "Destroy an complex whose real is "<<r<<", image is "<<i<<'.'<<endl;
        counter--;
    }

double Complex::Distanceof(const Complex &other) const
    {
        int distanceofr = r - other.r;
        int distanceofi = i - other.i;
        return pow(distanceofr * distanceofr + distanceofi * distanceofi, 0.5);
    }
void Complex::Print() const
    {
        if (r == 0 && i == 0)
            cout << 0;
        else if (i == 0)
        {
           cout <<  r;
        }
        else
        {   if(r!=0){
                cout <<  r;
                if(i>0)
                    cout << '+';
            }
               cout<<i<<'i';
        }
        cout<<endl;
    }

 int Complex::getCounter()
    {
        return counter;
    }
