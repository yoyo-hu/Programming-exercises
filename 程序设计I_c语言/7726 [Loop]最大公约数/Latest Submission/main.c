#include <stdio.h>
int main (){
int a,b;
int t;

scanf("%d%d",&a,&b);
if(a<b){
t=a;
a=b;
b=t;
}
while(a%b!=0){
    t=a;
    a=b;
    b=t%b;}
printf("%d",b);
return 0;
}
