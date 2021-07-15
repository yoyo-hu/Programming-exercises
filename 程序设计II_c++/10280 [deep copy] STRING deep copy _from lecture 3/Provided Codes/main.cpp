#include <iostream>
#include <cstdlib>
#include "String.h"
using namespace std;

int main()
{
    STRING stra("This");
    STRING strb("That");
    stra = strb;
    cout<<"success";
    return 0;
}
