#include <stdio.h>
int main(){
    int t;
    int n;
    int a[1005];
    int mi;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        for(int j=0;j<n;j++){
            scanf("%d",&a[j]);
        }
        int min=a[0];
        for(int k=0;k<n-1;k++){
            int min=a[k];
            int x=k;//remark the min
            for(int j=k;j<n;j++){
                if(a[j]<min){
                    min=a[j];
                    x=j;
                    }
            }
            mi=a[k];
            a[k]=a[x];
            a[x]=mi;
            for(int j=0;j<n-1;j++){
                printf("%d ",a[j]);
                }
                printf("%d\n",a[n-1]);
        }
        if(a[n-2]>a[n-1]){
            for(int j=0;j<n-2;j++){
                printf("%d ",a[j]);
                }
                printf("%d\n",a[n-1]);
                printf("%d\n",a[n-2]);
        }

      }
   return 0;
}
