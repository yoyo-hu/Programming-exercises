#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {
public:
    int r;
    int i;
    Complex();
    Complex(int r_, int i_);
    Complex(const Complex& other);
    ~Complex();
    
    double Distanceof(const Complex& other) const;
    void Print() const;
    
    static int getCounter();
    
private:
    static int counter;
};

#endif