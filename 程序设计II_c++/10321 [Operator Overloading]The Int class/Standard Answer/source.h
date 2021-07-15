 #include <iostream>
using namespace std;

class Int
{
  int i;
public:
  int getI() { return i; }
  //constructor
  Int(int a):i(a){};
  Int(double a){i = a;};

  //type transform
  operator int()
  {
    return i;
  }

  //ostream && istream
  friend ostream& operator<<(ostream& out, const Int& a)
  {
    out << a.i;
    return out;
  }

  friend istream& operator>>(istream& in, Int& a)
  {
    in >> a.i;
    return in;
  }

  //operator +=
  Int operator +=(int a)
  {
    this->i += a;
    return *this;
  }
  Int operator +=(double a)
  {
    this->i += a;
    return *this;
  }
  
  //operator -=  
  Int operator -=(int a)
  {
    this->i -= a;
    return *this;
  }
  Int operator -=(double a)
  {
    this->i -= a;
    return *this;
  }
  
  //operator *=
  Int operator *=(int a)
  {
    this->i *= a;
    return *this;
  }
  Int operator *=(double a)
  {
    this->i *= a;
    return *this;
  }
  
  //operator /
  Int operator /=(int a)
  {
    this->i /= a;
    return *this;
  }
  Int operator /=(double a)
  {
    this->i /= a;
    return *this;
  }
  
  //operator ++
  Int& operator ++()
  {
    ++this->i;
    return *this;
  }
  Int operator ++(int a)
  {
    Int temp = *this;
    ++this->i;
    return temp;
  }
  
  //operator --
   Int& operator --()
  {
    --this->i;
    return *this;
  }
  Int operator --(int a)
  {
    Int temp = *this;
    --this->i;
    return temp;
  }

  //operator =
  Int operator =(int a)
  {
    this->i = a;
    return *this;
  }
  Int operator =(double a)
  {
    this->i = a;
    return *this;
  }
  //add any member function needed here
};