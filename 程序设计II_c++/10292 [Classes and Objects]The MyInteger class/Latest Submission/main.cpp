#include "MyInteger.hpp"
#include <iostream>
using namespace std;
int main() {
    const string words[3][2] = {"not even", "even",
                                "not odd", "odd",
                                "not prime", "prime"};
    int a, b, c, d, e;
    string num;
    cin >> a >> b >> c;
    cin >> d >> e;
    cin >> num;

    MyInteger myInt(a);
    cout << "Integer "  << myInt.getValue() << " is: ";
    cout << words[0][myInt.isEven()] << ", ";
    cout << words[1][myInt.isOdd()] << ", ";
    cout << words[2][myInt.isPrime()] << ".\n";

    cout << "Integer "  << b << " is: ";
    cout << words[0][MyInteger::isEven(b)] << ", ";
    cout << words[1][MyInteger::isOdd(b)] << ", ";
    cout << words[2][MyInteger::isPrime(b)] << ".\n";

    MyInteger myInt2(c);
    cout << "Integer "  << myInt2.getValue() << " is: ";
    cout << words[0][MyInteger::isEven(myInt2)] << ", ";
    cout << words[1][MyInteger::isOdd(myInt2)] << ", ";
    cout << words[2][MyInteger::isPrime(myInt2)] << ".\n";

    MyInteger myInt3(d);
    MyInteger myInt4(e);
    if (myInt3.equals(e) && myInt3.equals(myInt4))
        cout << d << " and " << e << " are equal.\n";
    else
        cout << d << " and " << e << " are not equal.\n";

    cout << "String '" << num << "' convert to "
         << MyInteger::parseInt(num) << endl;

    return 0;
}