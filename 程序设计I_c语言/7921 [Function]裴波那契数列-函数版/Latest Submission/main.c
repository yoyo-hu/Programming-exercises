#include <stdio.h>
#include "func.h"
int main()
{
    int a;
    while(scanf("%d",&a)!=EOF)
        printf("%d\n",fibo(a));
    return 0;
}