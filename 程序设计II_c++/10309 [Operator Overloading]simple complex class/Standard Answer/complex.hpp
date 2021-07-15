#ifndef COMPLEX_HPP
#define COMPLEX_HPP

class complex {
public:
  complex();
  ~complex();
  complex(int real, int imag);
  double getModuli() const;
  void display() const;
  friend complex operator +(const complex& a, const complex& b);
  friend complex operator -(const complex& a, const complex& b);
private:
  int real;
  int imag;
};

#endif