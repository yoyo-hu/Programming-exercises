#include <iostream>
#include <algorithm>
#include "Set.hpp"
    Set::Set(){
        size = 0;
    }
    // Create an set with some element.
    Set::Set(int* m, int s){
        size=s;
        for (int i = 0;i<s;i++){
            members[i] = m[i];
        }
    }
    // Copy Constructor
    Set::Set(Set const &s){
        size=s.size;
        for (int i = 0;i<size;i++){
            members[i] = s.members[i];
        }
    }
    
    // append a element to set.
    // If element in the set, return false.
    // Or insert in set and return true.
    bool Set::append(int e){
        for (int i = 0; i < size;i++){
            if(members[i]==e){
                return 0;
            }
        }
        members[size]=e;
        size++;
        return 1;
    }
    
    // remove a element by its value from set.
    // If element in the set, then remove it and return true.
    // Or return false.
    bool Set::remove(int e){
        for (int i = 0; i < size;i++){
            if(members[i]==e){
                members[i]=members[size-1];
                size--;
                return 1;
            }
        }
        return 0;
    }
    
    // return true if the set is empty, or return false.
    bool Set::isEmptySet(){
        return (size == 0);
    }
    
    // return true if the element e is in the set, or return false.
    bool Set::isInSet(int e){
        for (int i = 0; i < size;i++){
            if(members[i]==e){
                return 1;
            }
        }
        return 0;
    }
    
    // & is intersection of two set
    Set Set::operator&(const Set &s){
        Set result;
        result.size = 0;
        for (int i = 0; i < s.size;i++){
            if(isInSet(s.members[i])){
               result.members[result.size++]=s.members[i];;
            }
        }
        return result;
    }
    // | is union of two set
    Set Set::operator|(const Set &s){
        Set result;
        result.size = size;
        for (int i = 0; i < size;i++){
            result.members[i]=members[i];
        }
        for (int i = 0; i < s.size;i++){
            result.append(s.members[i]);
        }
        return result;
    }
    // A - B is the complement of B with respect to A
    Set Set::operator-(const Set &s){
        Set result;
        result.size = size;
        for (int i = 0; i < size;i++){
            result.members[i]=members[i];
        }
        for (int i = 0; i < s.size;i++){
            if(result.isInSet(s.members[i]))
            result.remove(s.members[i]);
        }
        return result;
    }
    // A + B is their symmetric difference. A + B = (A - B) | (B - A)
    Set Set::operator+(const Set &s){
        return ((*this) | s) - ((*this) & s);
    }
    
    // return set.
    int* Set::getMembers(){
        return members;
    }
    
    // return size of set.
    int Set::getSize(){
        return size;
    }