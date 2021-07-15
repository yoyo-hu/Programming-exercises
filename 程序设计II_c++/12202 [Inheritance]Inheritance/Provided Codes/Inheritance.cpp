//
//  Inheritance.cpp
//  C++
//
//  Created by 李天培 on 16/3/24.
//  Copyright © 2016年 lee. All rights reserved.
//
 #include "Inheritance.hpp"
 baseA::baseA() {
    cout << "base A" << endl;
}
 baseA::~baseA() {
    cout << "~ base A" << endl;
}
 baseB::baseB() {
    cout << "base B" << endl;
}
 baseB::~baseB() {
    cout << "~ base B" << endl;
}
 derivedA::derivedA() {
    cout << "derived A" << endl;
}
 derivedA::~derivedA() {
    cout << "~ derived A" << endl;
}
 derivedB::derivedB() {
    cout << "derived B" << endl;
}
 derivedB::~derivedB() {
    cout << "~ derived B" << endl;
}
 C::C() {
    cout << "C" << endl;
}
 C::~C() {
    cout << "~ C" << endl;
}
 