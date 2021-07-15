//
//  main.cpp
//  C++
//
//  Created by 李天培 on 16/2/25.
//  Copyright © 2016年 lee. All rights reserved.
//
 
#include <iostream>
#include <algorithm>
#include "Set.hpp"
 
void display(int* members, int size) {
    std::sort(members, members + size);
    std::cout << "{";
    for (int i = 0; i < size; i++) {
        if (i < size - 1) std::cout << members[i] << ", ";
        else std::cout << members[i];
    }
    std::cout << "}" << std::endl;
}
 
int main(int argc, const char * argv[]) {
    int test[6];
    std::cin >> test[0]
    >> test[1]
    >> test[2]
    >> test[3]
    >> test[4]
    >> test[5];
    // Constructor 1
    Set s1 = Set();
    display(s1.getMembers(), s1.getSize());
    std::cout << "is empty set: " << s1.isEmptySet() << std::endl;
    // append func
    std::cout << "append: " << s1.append(test[0]) << std::endl;
    std::cout << "append: " << s1.append(test[4]) << std::endl;
    display(s1.getMembers(), s1.getSize());
    // repeat append
    std::cout << "append: " << s1.append(test[0]) << std::endl;
    display(s1.getMembers(), s1.getSize());
 
    std::cout << "is empty set: " << s1.isEmptySet() << std::endl;
 
    // Constructor 2
    Set s2 = Set(test, 5);
    // remove func
    std::cout << "remove: " << s2.remove(test[0]) << std::endl;
    display(s2.getMembers(), s2.getSize());
    // repeat append
    std::cout << "remove: " << s2.remove(test[0]) << std::endl;
    display(s2.getMembers(), s2.getSize());
 
    std::cout << test[5] << " is in set: " << s2.isInSet(test[5]) << std::endl;
    std::cout << test[2] << " is in set: " << s2.isInSet(test[2]) << std::endl;
 
    display(s1.getMembers(), s1.getSize());
    display(s2.getMembers(), s2.getSize());
 
    Set s3;
    s3 = s1 & s2;
    display(s3.getMembers(), s3.getSize());
 
    s3 = s1 | s2;
    display(s3.getMembers(), s3.getSize());
 
    s3 = s1 - s2;
    display(s3.getMembers(), s3.getSize());
 
    s3 = s2 - s1;
    display(s3.getMembers(), s3.getSize());
 
    s3 = s1 + s2;
    display(s3.getMembers(), s3.getSize());
 
    return 0;
}