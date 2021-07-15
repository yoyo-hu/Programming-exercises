#include"stdio.h"
#include"pf.h"

int main()
{
    pf[0] = &fun1;
    pf[1] = &fun2;
    pf[2] = &fun3;

    char str[10];
    scanf("%s",str);

    for(int i = 0;i < 3;i++)
        pf[i](str);

    return 0;
}
