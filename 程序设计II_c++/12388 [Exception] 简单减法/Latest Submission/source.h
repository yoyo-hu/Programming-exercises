#include <iostream>
#include <stdexcept>
using namespace std;
int calc(int a, int b)
{
  if (a<0) throw out_of_range("Out of range exeception");
  else if (b<0) throw out_of_range("Out of range exeception");
  else if (a<b) throw logic_error("Minuend smaller than subtrahend");
  return a-b;
}
void test(int a, int b){
    try{
        calc(a,b);
        cout<<a-b<<endl;
    }
    catch(out_of_range& oor){
        cout<<oor.what()<<endl;
    }
    catch(logic_error& le){
        cout<<le.what()<<endl;
    }
}