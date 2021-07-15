#include <iostream>
#include "functions.h"
using std::cin;
using std::cout;
using std::endl;

int main() {
    int x, y, sum, diff;
    cin >> x >> y;
    addsub(x, y, sum, diff);
    cout << sum << '\t' << diff << endl;
    swap(x, y);
    cout << x << '\t' << y << endl;
    swap(sum, diff);
    cout << sum << '\t' << diff << endl;
    return 0;
}