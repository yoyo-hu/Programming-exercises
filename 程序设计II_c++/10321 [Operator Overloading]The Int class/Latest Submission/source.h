#include<iostream>
#include<string>
using namespace std;
class Int
{
  int i;
public:
  int getI() { return i; }
  //add any member function needed here
  Int(){}
  Int(int val){
      i = val;
  }
  friend istream &operator>>(istream &i,Int &obj){
      i >> obj.i;
      return i;
  }
  void operator+=(int val){
      i += val;
  }
  void operator+=(double val){
      i += val;
  }
  void operator-=(double val){
      i -= val;
  }
  void operator*=(double val){
      i *= val;
  }
  void operator/=(double val){
      i /= val;
  }
  int operator+(int val){
      return i + val;
  }
  double operator+(double val){
      return i + val;
  }
  int operator+(Int other){
      return i + other.i;
  }
  friend int operator+(int val,Int obj){
      return val + obj.i;
  }
  friend double operator+(double val,Int obj){
      return val + obj.i;
  }
  void operator-=(int val){
      i -= val;
  }
  int operator-(int val){
      return i - val;
  }
  int operator-(Int other){
      return i - other.i;
  }
  friend int operator-(int val,Int obj){
      return val - obj.i;
  }
  double operator-(double val){
      return i - val;
  }
   friend double operator-(double val,Int obj){
      return val - obj.i;
  }
   void operator*=(int val){
      i *= val;
  }
  int operator*(int val){
      return i * val;
  }
  int operator*(Int other){
      return i * other.i;
  }
    friend int operator*(int val,Int obj){
      return val * obj.i;
  }
  double operator*(double val){
      return i * val;
  }
   friend double operator*(double val,Int obj){
      return val * obj.i;
  }
  void operator/=(int val){
      i /= val;
  }
  int operator/(int val){
      return i / val;
  }
  int operator/(Int other){
      return i / other.i;
  }
    friend int operator/(int val,Int obj){
      return val / obj.i;
  }
  double operator/(double val){
      return i / val;
  }
   friend double operator/(double val,Int obj){
      return val / obj.i;
  }
  int operator%(int val){
      return i % val;
  }
  int operator%(Int other){
      return i % other.i;
  }
    friend int operator%(int val,Int obj){
      return val % obj.i;
  }
  Int& operator++(){
      i++;
      return *this;
  }
  Int operator++(int){
      Int temp=*this;
      i++;
      return temp;
  }
  Int& operator--(){
      i--;
      return *this;
  }
  Int operator--(int){
      Int temp=*this;
      i--;
      return temp;
  }
  int operator-(){
      return -i;
  }
  operator int() { return i; }
};