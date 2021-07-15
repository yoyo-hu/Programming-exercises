#ifndef INTEGER_H
#define INTEGER_H
#include <iostream>
using namespace std;

class INTEGER
{
public:
      INTEGER(int i = 0); // 构造函数

      INTEGER(const INTEGER &other); // 拷贝构造函数

      // 友元重载加法运算符
      friend INTEGER operator+(INTEGER left, INTEGER right);
      
      void print();
private:
      int value; // 私有数据
};

#endif
