#include <iostream>
#include "source.h"
using namespace std;

Foo::Foo()
{
   x = 0;
   y = 0;
}
Foo::Foo(bool b)
{
	if(b){
		//cout<<"please enter x and y.\n";
		cin>>x>>y;
	}
   else x=y=0;
}
void Foo::p() const
{
	cout << "x is " << x <<", "<< "y is " << y <<".\n";
}

int main()
{
  //freopen("D:\\1-Teaching\\��������II\\9.7.in", "r", stdin);
  //freopen("D:\\1-Teaching\\��������II\\9.7.out", "w", stdout);
  Foo f1, f2(true), f3(true);
  f1.p();
  f2.p();
  f3.p();
  return 0;
}
