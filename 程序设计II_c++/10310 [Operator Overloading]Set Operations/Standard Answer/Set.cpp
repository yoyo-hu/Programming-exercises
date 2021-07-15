//
//  Set.cpp
//  C++
//
//  Created by 李天培 on 16/2/25.
//  Copyright © 2016年 lee. All rights reserved.
//
 
#include "Set.hpp"
 
Set::Set() {
    size = 0;
}
 
Set::Set(int* m, int s) {
    size = 0;
    for (int i = 0; i < s ; i++) {
        if (!isInSet(m[i])) {
            members[size++] = m[i];
        }
        if (size == MAX_MEMBERS) break;
    }
}
 
Set::Set(Set const &s) {
    size = s.size;
    for (int i = 0; i < size; i++) {
        members[i] = s.members[i];
    }
}
 
bool Set::append(int element) {
    if (size < MAX_MEMBERS && !isInSet(element)) {
        members[size] = element;
        size++;
        return true;
    } else {
        return false;
    }
}
 
bool Set::remove(int element) {
    for (int i = 0; i < size; i++) {
        if (members[i] == element) {
            members[i] = members[--size];
            return true;
        }
    }
    return false;
}
 
bool Set::isEmptySet() {
    return (size == 0) ? true : false;
}
 
int* Set::getMembers() {
    return members;
}
 
int Set::getSize() {
    return size;
}
 
bool Set::isInSet(int element) {
    for (int i = 0; i < size; i++) {
        if (members[i] == element) {
            return true;
        }
    }
    return false;
}
 
Set Set::operator&(const Set &s) {
    Set temp;
    for (int i = 0; i < s.size; i++) {
        if (isInSet(s.members[i])) {
            temp.members[temp.size++] = s.members[i];
        }
    }
    return temp;
}
 
Set Set::operator|(const Set &s) {
    Set temp(*this);
    for (int i = 0; i < s.size; i++) {
        temp.append(s.members[i]);
    }
    return temp;
}
 
Set Set::operator-(const Set &s) {
    Set temp(s);
    Set temp2(*this);
    for (int i = 0; i < temp2.size; i++) {
        if (temp.isInSet(temp2.members[i])) {
            temp2.remove(temp2.members[i]);
        }
    }
    return temp2;
}
 
Set Set::operator+(const Set &s) {
    Set temp(s);
    return (*this - temp) | (temp - *this);
}