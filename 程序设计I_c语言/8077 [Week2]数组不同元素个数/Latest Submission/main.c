#include <stdio.h>
int main(){
        int T;
        int i;
        int x,y;
        scanf("%d",&T);
        for(i=0;i<T;i++){
            _Bool b[100]={0};
            int a[100]={0};
            int t=0;
            scanf("%d",&x);
            for(int j=0;j<x;j++){
                scanf("%d",&y);
                if(b[y]==0){
                    b[y]=1;
                    t++;
                }
            }
            printf("%d\n",t);
        }
        return 0;
}
