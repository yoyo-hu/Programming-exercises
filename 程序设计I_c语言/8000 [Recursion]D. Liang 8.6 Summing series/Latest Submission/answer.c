#include "stdio.h"
double m(int n){
    if(n==1)
        return 1*1.0/2;
    else
        return n*1.0/(n+1)+m(n-1);
}
