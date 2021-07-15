#include <stdio.h>
int main(){
int M,N;
int a,b,c;
int i=0;
int t;

scanf("%d%d",&M,&N);
for(a=M/5;a>=0;a--){
    t=M-a*5;
    for(b=t/3;b>=0;b--){
    t=M-a*5-b*3;
    c=t*3;
    if(a+b+c==N&&a+b+c!=0){
    printf("%d %d %d\n",a,b,c);
    i=1;}
    }
}
if(i==0)
    printf("no answer");
return 0;}
