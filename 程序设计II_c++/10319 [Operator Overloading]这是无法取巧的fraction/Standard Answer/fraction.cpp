#include "fraction.h"
#include <iostream>
 
#define _num _numerator
#define _den _denominator
 
int fraction::gcd(const int & a, const int & b) const {
    if (b != 0)
        return gcd(b, a % b);
    return a;
}
 
void fraction::simp() {
    if (_den != 0) {
        if (_num == 0) {
            _den = 1;
        } else {
            int g = gcd(_num, _den);
            _num /= g;
            _den /= g;
            if (_den < 0) {
                _num *= -1;
                _den *= -1;
            }
        }
    }
}
 
fraction::fraction(const int & num, const int & den)
    : _num(num), _den(den) {
    simp();
}
 
fraction::fraction(const fraction &another)
    : _num(another._num), _den(another._den) {}
 
void fraction::operator=(const fraction & another) {
    _num = another._num;
    _den = another._den;
}
 
fraction fraction::operator+(const fraction & right) const {
    if (_den == 0 || right._den == 0)
        return fraction(0, 0);
    int lcm = _den / gcd(_den, right._den) * right._den;
    int l = lcm / _den, r = lcm / right._den;
    return fraction(_num * l + right._num * r, lcm);
}
 
fraction fraction::operator-(const fraction & right) const {
    return *this + fraction(-1 * right._num, right._den);
}
 
fraction fraction::operator*(const fraction & right) const {
    if (_den == 0 || right._den == 0)
        return fraction(0, 0);
    int g1 = gcd(_num, right._den), g2 = gcd(_den, right._num);
    return fraction((_num / g1) * (right._num / g2),
                    (_den / g2) * (right._den / g1));
}
 
fraction fraction::operator/(const fraction & right) const {
    return *this * fraction(right._den, right._num);
}
 
void fraction::operator+=(const fraction & right) {
    *this = *this + right;
}
 
void fraction::operator-=(const fraction & right) {
    *this = *this - right;
}
 
void fraction::operator*=(const fraction & right) {
    *this = *this * right;
}
 
void fraction::operator/=(const fraction & right) {
    *this = *this / right;
}
 
bool fraction::operator==(const fraction & right) const {
    return _den == 0 && right._den == 0 ||
           _den == right._den && _num == right._num;
}
 
bool fraction::operator!=(const fraction & right) const {
    return !(*this == right);
}
 
bool fraction::operator<(const fraction & right) const {
    return _num * right._den < _den * right._num;
}
 
bool fraction::operator>(const fraction & right) const {
    return _num * right._den > _den * right._num;
}
 
bool fraction::operator<=(const fraction & right) const {
    return !(*this > right);
}
 
bool fraction::operator>=(const fraction & right) const {
    return !(*this < right);
}
 
std::istream & operator>>(std::istream & is, fraction & f) {
    int n, d;
    is >> n >> d;
    f = fraction(n, d);
    return is;
}
 
std::ostream & operator<<(std::ostream & os, const fraction & f) {
    if (f._den == 0)
        os << "NaN";
    else if (f._den == 1)
        os << f._num;
    else
        os << f._num << '/' << f._den;
    return os;
}
