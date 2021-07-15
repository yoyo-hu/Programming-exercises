#include <iostream>
#include <Object.h>
using namespace std;
extern void TestObjects(){
    Object a(1);
    {
        Object b(2);
        Object c(3);
    }
    Object d(4);
}