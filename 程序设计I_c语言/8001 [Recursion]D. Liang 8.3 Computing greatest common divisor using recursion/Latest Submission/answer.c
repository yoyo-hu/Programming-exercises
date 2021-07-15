#include "stdio.h"
int gcd(int n, int m){
    int i=n;
    if(n>m)
        i=m;
    for(;i>=1;i--)
        if(n%i==0&&m%i==0)
            return i;
}
