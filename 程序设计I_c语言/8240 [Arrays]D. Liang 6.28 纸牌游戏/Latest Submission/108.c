#include <stdio.h>
int main(){
    int t;
    int n;
    int a[100];
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int x=n;
        for(int j=1;j<=n;j++)
            a[j]=j;
        for(int k=1;k!=x;k+=2){
            printf("%d ",a[k]);
            a[++x]=a[k+1];
        }
        printf("%d \n",a[x]);
    }

   return 0;
}
