#include "func.h"
int fibo(int n){
int t;
    if(n==1)
    t=1;
    else if(n==2)
    t=1;
    else
    t=fibo(n-1)+fibo(n-2);
    return t;

}
