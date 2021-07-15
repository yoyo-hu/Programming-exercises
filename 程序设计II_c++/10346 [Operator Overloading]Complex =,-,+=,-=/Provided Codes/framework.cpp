#include <iostream>
using namespace std;

#include "1004.cpp"

int main()
{
 //freopen("test01.in", "r", stdin);
 //freopen("test01.out", "w", stdout);
 Complex a(1,2);
 Complex b(2, 3);
 cout << "a(" << a.getReal() << ", " << a.getImag() << ")" << endl;
 cout << "b(" << b.getReal() << ", " << b.getImag() << ")" << endl;

 Complex c, d;
 c = a + b;
 cout << "c(" << c.getReal() << ", " << c.getImag() << ")" << endl;
 d = a - b;
 cout << "d(" << d.getReal() << ", " << d.getImag() << ")" << endl;
 c += d;
 cout << "c(" << c.getReal() << ", " << c.getImag() << ")" << endl;
 c -= a;
 cout << "c(" << c.getReal() << ", " << c.getImag() << ")" << endl;

 return 0;
}
