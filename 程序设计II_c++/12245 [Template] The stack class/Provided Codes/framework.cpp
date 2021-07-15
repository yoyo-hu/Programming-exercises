#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include "source.h"
using namespace std;
int main()
{
 //freopen("test01.in", "r", stdin);
 //freopen("test01.out", "w", stdout);

 Stack<int,15> intStack;
 for (int i = 0; i < 15; i++) intStack.push(i);

 cout<<intStack.size()<<endl;
 while (!intStack.empty()) {
  cout << intStack.peek() << " ";
  intStack.pop();
 }
 cout << endl;

 Stack<string,3> stringStack;
 stringStack.push("Chicago");
 stringStack.push("Denver");
 stringStack.push("London");

 while (!stringStack.empty())
  cout << stringStack.pop() << " ";
 cout << endl;

 return 0;
}