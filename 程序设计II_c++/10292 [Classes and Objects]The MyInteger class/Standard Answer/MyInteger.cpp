#include "MyInteger.hpp"
#include <iostream>
#include <cmath>
#include <sstream>

MyInteger::MyInteger(int value_) {
    value = value_;
}
int MyInteger::getValue() const {
    return value;
}
bool MyInteger::isEven() const {
    return !(value & 1);
}
bool MyInteger::isOdd() const {
    return (value & 1);
}
bool MyInteger::isPrime() const {
    if (value <= 1) return false;
    int s = sqrt(value);
    for (int i = 2; i <= s; i++)
        if (value % i == 0)
            return false;
    return true;
}
bool MyInteger::isEven(int val) {
    return !(val & 1);
}
bool MyInteger::isOdd(int val) {
    return (val & 1);
}
bool MyInteger::isPrime(int val) {
    return MyInteger(val).isPrime();
}
bool MyInteger::isEven(const MyInteger& myInt) {
    return myInt.isEven();
}
bool MyInteger::isOdd(const MyInteger& myInt) {
    return myInt.isOdd();
}
bool MyInteger::isPrime(const MyInteger& myInt) {
    return myInt.isPrime();
}
bool MyInteger::equals(int value_) {
    return (value == value_);
}
bool MyInteger::equals(const MyInteger& myInt) {
    return (value == myInt.getValue());
}
int MyInteger::parseInt(const std::string& myInt) {
    int val;
    std::stringstream ss;
    ss << myInt;
    ss >> val;
    return val;
}