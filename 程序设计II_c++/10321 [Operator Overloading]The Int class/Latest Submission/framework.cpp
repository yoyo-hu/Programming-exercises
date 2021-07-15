#include<iostream>
#include<string>
#include"source.h"
using namespace std;

void g()
{
  Int a=0;
  Int b(1);
  Int c(2.5);
  Int d = 99.5;

  cout <<  a << endl;
  cout <<  b << endl;
  cout << b.getI() << endl;  
  cout <<  c << endl;
  cout <<  d << endl;
  
  d += 1;
  d += 1.5;
  cout <<  c+d << endl;
  cout <<  1+c << endl;
  cout <<  c+1 << endl;
  cout <<  1.5+c << endl;
  cout <<  c+1.5 << endl;

  cout <<  a + b + c + d << endl;

  d -= 1;
  d -= 1.5;
  cout <<  c-d << endl;
  cout <<  1-c << endl;
  cout <<  c-1 << endl;
  cout <<  1.5-c << endl;
  cout <<  c-1.5 << endl;

  d *= 1;
  d *= 1.5;
  cout <<  c*d << endl;
  cout <<  9*c << endl;
  cout <<  c*9 << endl;
  cout <<  19.4*c << endl;
  cout <<  c*19.4 << endl;
  d /= 2;
  d /= 2.5;
  cout <<  d/c << endl;
  cout <<  2/c << endl;
  cout <<  c/2 << endl;
  cout <<  2.5/c << endl;
  cout <<  c/2.5 << endl;

  cout <<  b%c << endl;
  cout <<  5%c << endl;
  cout <<  c%2 << endl;

  cout <<  c++ << endl;
  cout <<  ++c << endl;
  cout <<  c-- << endl;
  cout <<  --c << endl;    
  cout <<  -c << endl;
  
  int c1 = c;
  cout << c1 << endl;
  c1 = c;  
  cout << c1 << endl;  

  cin >> d;
  cout <<  d << endl;
}

int main()
{
  g();
  return 0;
}
