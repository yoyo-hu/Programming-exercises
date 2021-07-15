//
//  Set.hpp
//  C++
//
//  Created by 李天培 on 16/2/25.
//  Copyright © 2016年 lee. All rights reserved.
//
 
#ifndef Set_hpp
#define Set_hpp
 
#include <stdio.h>
 
#define MAX_MEMBERS 100
 
class Set {
private:
    int members[MAX_MEMBERS];
    int size;
public:
    // Create an empty set.
    Set();
    // Create an set with some element.
    Set(int* m, int s);
    // Copy Constructor
    Set(Set const &s);
    
    // append a element to set.
    // If element in the set, return false.
    // Or insert in set and return true.
    bool append(int e);
    
    // remove a element by its value from set.
    // If element in the set, then remove it and return true.
    // Or return false.
    bool remove(int e);
    
    // return true if the set is empty, or return false.
    bool isEmptySet();
    
    // return true if the element e is in the set, or return false.
    bool isInSet(int e);
    
    // & is intersection of two set
    Set operator&(const Set &s);
    // | is union of two set
    Set operator|(const Set &s);
    // A - B is the complement of B with respect to A
    Set operator-(const Set &s);
    // A + B is their symmetric difference. A + B = (A - B) | (B - A)
    Set operator+(const Set &s);
    
    // return set.
    int* getMembers();
    
    // return size of set.
    int getSize();
    
};
 
#endif /* Set_hpp */
