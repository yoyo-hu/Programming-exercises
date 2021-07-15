#include<stdio.h>
#include "pf.h"
int main(){
     char s[10];
     scanf("%s", s);
     pf[0] = *fun1;
     pf[1] = *fun2;
     pf[2] = *fun3;
     for (int i = 0; i < 3;i++){
          pf[i](s);
     }
     return 0;
}
