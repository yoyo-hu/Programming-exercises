#ifndef COMPLEX_H
#define COMPLEX_H

struct Complex {
	int r;
	int i;
	Complex();
	Complex(int r_, int i_);
    ~Complex();
};

double Distanceof(const Complex& c1, const Complex& c2);
#endif