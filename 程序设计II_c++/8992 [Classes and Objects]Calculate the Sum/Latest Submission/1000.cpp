#include <iostream>
using namespace std;
class MyClass
{
    int data;
public:
    MyClass(int d){
      data = d;
    } //将d的值赋给data, d值大于0
    void printData(){
      cout << data<<endl;
    } 
    int sumIt(){
      return data * (data + 1) / 2;
    } //求和1+2+3+...+data，函数返回该和值
};