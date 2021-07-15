#include <iostream>
using namespace std;

class Object {
 public :
  virtual string name() {
   return "Object";
  }
};

class Animal:public Object {
 public :
  virtual string name() {
   return "Animal";
  }
};

class Dog:public Animal {
 public :
  virtual string name() {
   return "Dog";
  }
};

class Cat:public Animal {
 public :
  virtual string name() {
   return "Cat";
  }
};

class Vehicle:public Object {
 public :
  virtual string name() {
   return "Vehicle";
  }
};

class Bus:public Vehicle {
 public :
  virtual string name() {
   return "Bus";
  }
};

class Car:public Vehicle {
 public :
  virtual string name() {
   return "Car";
  }
};

class Person:public Object {
 public :
  virtual string name() {
   return "Person";
  }
};

class Student:public Animal {
 public :
  virtual string name() {
   return "Student";
  }
};

class Teacher:public Animal {
 public :
  virtual string name() {
   return "Teacher";
  }
};

string instanceof(Object &t) {
 return  t.name();

}

