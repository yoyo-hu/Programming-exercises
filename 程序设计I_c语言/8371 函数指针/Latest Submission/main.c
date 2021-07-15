#include <stdio.h>
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
int main(){
    pf[0]=fun1;
    pf[1]=fun2;
    pf[2]=fun3;
    char a[11];
    scanf("%s",a);
    for(int i=0;i<3;i++)
        pf[i](a);
}

