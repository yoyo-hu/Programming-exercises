#include "Vector.h"
#include <iostream>
#include <string>
using namespace std;
 Vector::Vector(string n, int a, int b[]) {
    name = n;
    dimension = a;
    param = new int[a+1];
    for (int i = 0; i < a; i++)
        param[i] = b[i];
    cout << "construct a vector called " << name << ".\n";
}
 Vector::Vector(const Vector &otherVec) {
    name = otherVec.name;
    dimension = otherVec.dimension;
    param = new int[dimension+1];
    for (int i = 0; i < dimension; i++)
        param[i] = otherVec.param[i];
    cout << "copy a vector called " << name << ".\n";
}
 Vector::~Vector() {
    delete [] param;
    cout << "release memory from a vector called " << name << ".\n";
}
 void Vector::isEqual(const Vector &otherVec) {
    if (name == otherVec.name) {
        cout << "same name, ";
    } else {
        cout << "different name, ";
    }
    if (dimension != otherVec.dimension) {
        cout << "different value.\n";
        return;
    }
    for (int i = 0; i < dimension; i++) {
        if (param[i] != otherVec.param[i]) {
            cout << "different value.\n";
            return;
        }
    }
    cout << "same value.\n";
}
 void Vector::setName(string newName) {
    name = newName;
}
 void Vector::print() {
    cout << name << "(";
    for (int i = 0; i < dimension-1; i++)
        cout << param[i] << ", ";
    cout << param[dimension-1] << ")\n";
}
 