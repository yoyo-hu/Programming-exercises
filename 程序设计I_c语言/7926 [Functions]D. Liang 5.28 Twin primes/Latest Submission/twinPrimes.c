#include "twinPrimes.h"
int twinPrimes (int n){
    int t,j;
    int a,b;
    int k=0;
    for(a=3;a<n-2;a++){
        t=0;
        for(j=2;j<a;j++)
            if(a%j==0)
            t=1;
        if(t==0){
            b=a+2;
            for(j=2;j<b;j++)
            if(b%j==0)
            t=1;
        }
        if(t==0)
            k++;
    }
    return k;
}
