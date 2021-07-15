#include <iostream>
#include <cmath>
using namespace std;
class complex{
    public:
        int real;
        int imag;
        complex(int r,int i);
        void display() const;
        //print the complex with this form like 3 + 4i, if the real part and the imaginary part both are 0, you need to print 0;
        double getModuli() const;
        //like the function's name, you need to return the moduli of the complex
        complex operator+(complex&other);
        complex operator-(complex&other);
        //overload "+" and "-"
};