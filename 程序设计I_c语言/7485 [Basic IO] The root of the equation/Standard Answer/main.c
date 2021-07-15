#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c;
    float e,d,f;
    scanf("%d %d %d",&a,&b,&c);
    e=sqrt(b*b-4*a*c);
    d=(-e-b)/(2*a);
    f=(e-b)/(2*a);
    printf("%1.3f %1.3f\n",d,f);
    return 0;
}
