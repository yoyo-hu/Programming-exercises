# [Exception] Simple Calculator with Exeption Handling

## Knowledge points

Exception Handling(try, catch and throw), polymorphic, string

## Introduction

We are going to write a program to calculate a string with some simbols, say a
simple calculator. You need to throw the exceptions whenever there is
something wrong in the string. In this experiment, you will learn how to
define exception classes in c++ and how to handle it. Eception handling is a
powerful tool in c++.

In C++ programming, an exception is a problem that arises during the execution
of a program. A C++ exception is a response to an exceptional circumstance
that arises while a program is running, such as an attempt to divide by zero.

Exceptions provide a way to transfer control from one part of a program to
another. C++ exception handling is built upon three keywords: try, catch, and
throw.

throw: A program throws an exception when a problem shows up. This is done
using a throw keyword.

catch: A program catches an exception with an exception handler at the place
in a program where you want to handle the problem. The catch keyword indicates
the catching of an exception.

try: A try block identifies a block of code for which particular exceptions
will be activated. It's followed by one or more catch blocks.

Unfortunately, there is no "finally" keyword in C++, you can learn it in java.

## Requirements

This calculator is such a simple one and it can do these things:

  1. It can only handle with numbers which is in [0, 9].
  2. It can only calculate plus and minus, say '+' and '-'.

Some legal input strings:

1+2+3

1+3-2

1+1

1

Some illegal input strings:

11+24

2*4

4/2

+1-3

-2-1



Now your job is to figure out this problem: calculate and get the result of
the expression string if it's legal. Otherwise, throw the exact exception.

Here are some exceptions which are defined in Exception.hpp

Here is a diagram:

Exception: This is the base class.

ExpressionException: This is a base class indicates the generall exception in
expression calculating.

IllegalSymbolException: This is a exception class inidicates illegal symbols.
All symbols are illegal except '0', '1', '2', '3'.... '9', '+' and '-'.

MissingOperatorException: An operator is missing when we are calculating. For
example: "11+2" -> "Missing operator between 1 and 1 (position 1 expects an
operator) "

MissingOperandException: An operand is missing when we are calculating. For
example: "1++2" -> "Missing operand between + and + (position 2 expects an
operand)"

EmptyExpressionException: If the expression string is empty, this exception
will be thrown.

## Reference

[c++ exception handling by
cplusplus.com](http://www.cplusplus.com/doc/tutorial/exceptions/)

[c++ exception and error handling by
isocpp](https://isocpp.org/wiki/faq/exceptions)

[c++ exception handling by wikipedia Chinese](https://zh.wikipedia.org/wiki/C%
2B%2B%E5%BC%82%E5%B8%B8%E5%A4%84%E7%90%86)

[c++ standard exceptions by cpp
reference](http://en.cppreference.com/w/cpp/error/exception)

## Questions

If you have any questions, please leave a question here: [Github discussion
for 15 cpp learning](https://github.com/ghostbody/15-cpp-learning/issues)

I can't reply you if you comment below........

## More

It seems that you guys do not like to solve +7 TA's question. I think it's
necessary to have difficult problems if you want to learn C++ deeply. Or you
may find it difficult to get an offer from a good company like BAT(Baidu, Ali,
Tencent).

I will leave +7's experiment questions if there is too few submissions of his
homework.



## Hint
大家有问题请在这里留言，你在私底下的评论，TA是无法回复的：



https://github.com/ghostbody/15-cpp-learning/issues

 (已毕业多年老TA，大家怨念不要太深，如有问题欢迎邮件423093883@qq.com)讨论，另外如果需要网易游戏内推也可以联系我~么么哒）

**From Eden**

