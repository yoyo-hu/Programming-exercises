#include <iostream>
#include"source.h"
using namespace std;
 

int main()
{

  Stack<int> s;
 
  for(int i=0;i<10;++i) s.push(i);
  s.printStack();

  cout << s.peek() << endl;
  s.printStack();

  s.pop();
  s.printStack();
  
  s.push(100);
  s.printStack();
  
  cout << "!" << endl;
  while (!s.empty())
  {
    cout << s.peek() << endl;
    s.pop();
  }
  
  return 0;

}
