#include <iostream>
#include "source.h"
using namespace std;

int main ( )
{
    cout << sum() << endl;
    cout << sum(6) << endl;
    cout << sum(6, 10) << endl;
    cout << sum(6, 10, 20) << endl;

    return 0;
}
