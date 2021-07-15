class Complex
{
public:
    Complex(): real(0), imag(0) {}
    Complex(int a, int b): real(a), imag(b) {}
    int getReal() const { return real; }
    int getImag() const { return imag; }
    Complex operator+ (Complex other){
      Complex result(real + other.real, imag + other.imag);
      return result;
    }
    Complex operator- (Complex other){
      Complex result(real - other.real, imag - other.imag);
      return result;
    }
    Complex& operator+= (Complex other){
      real += other.real, imag += other.imag;
      return *this;
    }
    Complex& operator-= (Complex other){
      real -= other.real, imag -= other.imag;
      return *this;
    }
private:
    int real;
    int imag;
};