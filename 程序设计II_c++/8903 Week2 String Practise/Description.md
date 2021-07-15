# Week2 String Practise

### Description
编写一个函数，接收两个string，将第一个string的前三个字符与第二个string的最后三个字符拼接到一起，并返回结果string。该函数的原型为string MyStringPractise(const string &s1, const string &s2)。有可能s1或s2不足三个字符，这时候应该用上整个string。

### Sample Input
123456 21

### Sample Output
12321

### Hint
main函数已经写好，你只需要编写MyString.h头文件。你可能需要引用头文件cstring或其他相关的头文件。注意string也是在std命名空间中！

注意MyStringPractise函数的参数部分，变量名前面加了&符号，这是C++有别于C的新特性，称之为引用传递。引用传递可以让参数成为被传入量的一个引用，在函数内对引用做的修改也会影响到函数外的被传入量。为了避免对引用误修改而影响到原传入量，我们同时加入const修饰。更多关于引用传递的运用，大家可以去Google上百度一下。