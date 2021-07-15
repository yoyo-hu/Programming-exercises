#include <stdio.h>
int t=0;
void search(int a,int b);
int main(){
    int h,s;
    scanf("%d%d",&h,&s);
    search(h,s);
    printf("%d",t);
}
void search(int a,int b){
    if(a>0){
    for(int i=1;i<=b;i++){
       search(a-i,b);
        }
    }
    else if(a==0)t++;
}
