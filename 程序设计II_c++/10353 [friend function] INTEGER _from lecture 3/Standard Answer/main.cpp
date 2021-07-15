#include <iostream>
#include <cstdlib>
#include "Integer.h"
using namespace std;

int main()
{
    INTEGER x(10); // 定义整数对象，用构造函数来初始化
    INTEGER y = x; // 定义整数对象，用拷贝构造函数来初始化
    INTEGER z;     // 定义整数对象，用构造函数的缺省参数初始化

    y = x + 2;  // 合法调用
    z = 30 + y; // 也是合法的调用
    z.print();
    return 0;
}
