#include<stdio.h>
int main(){
    int a[100]={0};
    int n,x,y;
    scanf("%d%d%d",&n,&x,&y);
    int cnt=0,flag=1;
    a[x]=1;
    printf("%d ",x);
    for(int i=x;;i++){
        if(i==n)i=0;
        if(a[i]==0){
            cnt++;
        }
        if(cnt==y){
            a[i]=1;
            printf("%d ",i);
            flag++;
            cnt=0; 
        }
        if(flag==n)break;
    }
    return 0;
}