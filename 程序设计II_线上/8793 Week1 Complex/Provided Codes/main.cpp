#include "check.h"
#include <iostream>
#include <math.h>
#include "complex.h"
using std::cin;
using std::cout;
using std::endl;

int main() {
    Complex c1;
    int i, r;
    cin >> r >> i;
    Complex c2(r, i);
    cin >> r >> i;
    auto c3 = new Complex(r, i);
    cout << Distanceof(c2, *c3) << endl;
    delete c3;
    return 0;
}