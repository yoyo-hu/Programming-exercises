#include "check.h"
#include "complex.h"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void printCounter() {
    cout << "The number of complexes is: " << Complex::getCounter() << endl;
}

int main() {
    Complex c0;
    printCounter();
    int r, i;
    cin >> r >> i;
    auto c1 = new Complex(r, i);
    c1->Print();
    printCounter();
    Complex c2(*c1);
    printCounter();
    delete c1;
    printCounter();
    cin >> r >> i;
    Complex c3(r, i);
    cout << "The distance is " << c2.Distanceof(c3) << endl; 
    printCounter();
    return 0;
}