
class Complex { 
    public:
    Complex(): real(0), imag(0) {
    }
    Complex(int a, int b) : real(a), imag(b){}
    int getReal() const { return real; }
    int getImag() const { return imag; }
    Complex operator+(const Complex&other){
        return Complex(real + other.real, imag + other.imag);
    }
    Complex operator-(const Complex&other){
        return Complex(real - other.real, imag - other.imag);
    }
    void operator+=(const Complex&other){
        real += other.real;
        imag += other.imag;
    }
    void operator-=(const Complex&other){
        real -= other.real;
        imag -= other.imag;
    }
private:
    int real;
    int imag;
};