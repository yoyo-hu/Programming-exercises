//
//  Inheritance.hpp
//  C++
//
//  Created by 李天培 on 16/3/24.
//  Copyright © 2016年 lee. All rights reserved.
//
#ifndef Inheritance_hpp
#define Inheritance_hpp
#include <stdio.h>
#include <iostream>
using namespace std;
class baseA {
public:
    baseA();
    ~baseA();
};
class baseB {
public:
    baseB();
    ~baseB();
};
class derivedA: public baseA {
public:
    derivedA();
    ~derivedA();
};
class derivedB: public baseA, public baseB {
public:
    derivedB();
    ~derivedB();
};
class C: public derivedA, public derivedB {
public:
    C();
    ~C();
};
#endif /* Inheritance_hpp */
 