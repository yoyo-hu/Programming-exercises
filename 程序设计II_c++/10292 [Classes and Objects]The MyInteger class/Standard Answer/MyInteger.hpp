#ifndef _MYINTEGER_H
#define _MYINTEGER_H
#include <string>

class MyInteger
{
  private:
    int value;
  public:
    MyInteger(int);
    int getValue() const;
    bool isEven() const;
    bool isOdd() const;
    bool isPrime() const;
    static bool isEven(int);
    static bool isOdd(int);
    static bool isPrime(int);
    static bool isEven(const MyInteger&);
    static bool isOdd(const MyInteger&);
    static bool isPrime(const MyInteger&);
    bool equals(int);
    bool equals(const MyInteger&);
    static int parseInt(const std::string&);
};

#endif
