#include"stdio.h"

void *(*pf[3])(char *p);
void *fun1(char *p)
{
    printf("fun1:%s\n",p);
    return p;
}

void *fun2(char *p)
{
    printf("fun2:%s\n",p);
    return p;
}

void *fun3(char *p)
{
    printf("fun3:%s\n",p);
    return p;
}
