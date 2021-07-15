# Week2 [Basic C++] Simple C++ Program

# Description
C++的输入输出使用**cin** 和**cout**函数，这两个函数存在于** <iostream>** 头文件中。

在C语言中，输出和输出一般需要指明变量的类型，而在C++中，输入和输出无须指明变量的类型。eg：
```
int number1;
float number2;
char x;
scanf("%d%f%c", &number1, &number2, &x);
```
以上的C语言程序在C++中为
```
#include <iostream> // 包含输入输出函数的头文件
using namespace std; // 命名空间，详细含义在以后了解，如果不加这一句，cin会报错
int number1;
float number2;
char x;
cin >> number >> number2 >> x;
```
如果在上面的程序中不加上** using namespace std; **，则需要改为std::cin >> number >> number2 >> x;
输出： 
```
#include <iostream>
std::cout << "hello world!" << std::endl; // endl == '\n'
```
请使用C++的输入输出进行练习。
# Input
```
int a, b;
double d_x, d_y;
char arr[10][11];
```
# Output
a的b次方(用pow（）函数，头文件cmath)

d_x*d_y

数组从最后一行到第一行的输出

# Simple Input
2 3

3.14 4.25

0000000000

1111111111

2222222222

3333333333

4444444444

5555555555

6666666666

7777777777

8888888888

9999999999

# Simple Output
8

13.345

9999999999

8888888888

7777777777

6666666666

5555555555

4444444444

3333333333

2222222222

1111111111

0000000000



