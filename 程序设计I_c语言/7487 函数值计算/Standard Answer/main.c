#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    float x,y,s1,s2,s3,s4,e=0.5;
    scanf("%d %d %d %f %f",&a,&b,&c,&x,&y);
    s1=1200/(24-4*5);
    s2=c*pow(pow(a,2)+pow(b,2),e);
    s3=log(log(pow(10,x)+y));
    d=x+y;
    s4=y+(a%5)*((d/2)%4);
    printf("%.3f\n%.3f\n%.3f\n%.3f\n",s1,s2,s3,s4);
    return 0;
    
}
