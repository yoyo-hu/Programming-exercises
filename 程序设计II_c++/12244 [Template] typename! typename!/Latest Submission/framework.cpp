#include<iostream>
#include<string>
#include"source.h"
using namespace std;


int main()
{
  MyClass<TypeB> obj2;
  cout << obj2.subtypeobj.toString() << endl;

  MyClass<TypeA> obj1;
  cout << obj1.subtypeobj.toString() << endl;

  MyClass<TypeA> obj3;
  cout << obj3.subtypeobj.toString() << endl;

  MyClass<TypeB> obj4;
  cout << obj4.subtypeobj.toString() << endl;

  return 0;
}
