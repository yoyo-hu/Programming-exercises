#include<iostream>
#include<string>
#include"source.h"
using namespace std;

ostream& operator<<(ostream& os, const Date& date)
{
  os << date.getYear() << "-" << date.getMonth() << "-" << date.getDay();
  return os;
}

/* 
f1() test for:
  constructor, copy constructor, assign assignment
  static member function leapyear()
  operator ==, !=, <, <=, >, >=
*/
void f1()
{
  Date date1, date2(2003,1,1);
  Date date3 = Date(2007,2,28);
  cout << "date1: " << date1 << endl;
  cout << "date2: " << date2 << endl;
  
  cout << "date3 after copy constructor: " << date3 << endl;
  date3 = date1;
  cout << "date3 after copy asignment: " << date3 << endl;  

  cout << "year 1996 is leap year? " << Date::leapyear(1996) << endl;
  cout << "year 1200 is leap year? " << Date::leapyear(1200) << endl;
  cout << "year 1300 is leap year? " << Date::leapyear(1300) << endl;
  cout << "year 1999 is leap year? " << Date::leapyear(1999) << endl;

  cout <<  "(date1==date3)? " << (date1==date3) << endl;
  cout <<  "(date1!=date3)? " << (date1!=date3) << endl;
  cout <<  "(date1==date2)? " << (date1==date2) << endl;
  cout <<  "(date1!=date2)? " << (date1!=date2) << endl;

  cout <<  "(date1<date1)? " << (date1<date1) << endl;
  cout <<  "(date1<=date1)? " << (date1<=date1) << endl;
  cout <<  "(date1<date2)? " << (date1<date2) << endl;
  cout <<  "(date1<=date2)? " << (date1<=date2) << endl;
  
  cout <<  "(date1>date1)? " << (date1>date1) << endl;
  cout <<  "(date1>=date1)? " << (date1>=date1) << endl;
  cout <<  "(date1>date2)? " << (date1>date2) << endl;
  cout <<  "(date1>=date2)? " << (date1>=date2) << endl;

}

int main()
{
  f1();
  //system("PAUSE");
  return 0;
}

void f2()
{
  Date date1, date2(2003,1,1);
  Date date3 = Date(2007,2,28);
  cout << "date1: " << date1 << endl;

  cout << "date3 after copy constructor: " << date3 << endl;
  date3 = Date(2010, 2, 29);
  cout << "date3 after copy asignment: " << date3 << endl;  
  
  /*
  int i1, i2;
  date2 -= 60;
  cout << "date2: " << date2 << endl;
  cout << "date2.operator-=(int): " << date3 << endl;  

  i1 = date3 - date2;
  cout << "date3-date2 = " << i1 << endl;   
  */
}

