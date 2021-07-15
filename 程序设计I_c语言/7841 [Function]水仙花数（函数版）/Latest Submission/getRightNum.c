#include "getRightNum.h"
int getRightNum(int n){
    int i;
    int t=0;
    int a,b,c;
    for(i=n;i>=100;i--){
        a=i%10;
        b=i/100;
        c=i/10%10;
        if(a*a*a+b*b*b+c*c*c==i){
            return i;
            t=1;
            break;
        }
    }
    if(t==0)
        return -1;
}

