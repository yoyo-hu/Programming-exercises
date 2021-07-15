#include <stdio.h>
#include <string.h>
int a[1005][105];
int main(){
    int n;
    int mi[105];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%s",a[i]);
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(strcmp(a[j],a[j+1])>0){
                 strcpy(mi,a[j]);
                 strcpy(a[j],a[j+1]);
                 strcpy(a[j+1],mi);
            }
        }
    }
    for(int i=0;i<n;i++)
        printf("%s\n",a[i]);
   return 0;
}
