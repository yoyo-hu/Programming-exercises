#include <iostream>
#include <cstring>
#include "Vector.h"
#define MAX 51
using namespace std;
Vector::Vector(string s, int num, int a[]){
  name=s;
  dimension = num;
  param = new int[num];
  for (int i = 0; i < num;i++){
    param[i] = a[i];
  }
  cout << "construct a vector called "<<name<<".\n";
}
Vector::Vector(const Vector &otherVec){
  name=otherVec.name;
  dimension = otherVec.dimension;
  param = new int[dimension];
  for (int i = 0; i < dimension;i++){
    param[i] = otherVec.param[i];
  }
  cout << "copy a vector called "<<name<<".\n";
}
Vector::~Vector(){
  cout << "release memory from a vector called "<<name<<".\n";
  delete []param;
}
void Vector::isEqual(const Vector &other){
  if(name==other.name){
    if(dimension==other.dimension)
      cout << "same name, same value.\n";
    else
      cout << "same name, different value.\n";
  }
  else{
    if(dimension==other.dimension)
      cout << "different name, same value.\n";
    else
      cout << "different name, different value.\n";
  }
}
void Vector::setName(string s){
  name = s;
}
void Vector::print(){
  cout << name<<'(';
  for (int i = 0; i < dimension-1;i++){
    cout << param[i]<<", ";
  }
  if(dimension-1!=0)
    cout << param[dimension - 1];
  cout <<')'<<endl;
}