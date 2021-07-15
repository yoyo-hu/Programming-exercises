#include <iostream>
#include "complex.hpp"

using namespace std;

int main() {
  int real, imag;
  cin >> real >> imag;
  complex a(real, imag);
  a.display();
  cout << endl;
  cin >> real >> imag;
  complex b(real, imag);
  b.display();
  cout << endl;
  complex c = a + b;
  complex d = a - b;
  cout << c.getModuli() << " " << d.getModuli() << endl;
  c.display();
  cout << endl;
  d.display();
}