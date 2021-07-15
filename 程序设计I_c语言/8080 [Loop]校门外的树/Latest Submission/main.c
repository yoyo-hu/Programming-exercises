#include <stdio.h>
 _Bool b[10002]={0};
int main(){
        int L;
        int M;
        int i,j;
        int x,y;
        int t=0;
        scanf("%d%d",&L,&M);
        for(i=0;i<M;i++){
            scanf("%d%d",&x,&y);
            for(j=x;j<=y;j++)
            b[j]=1;
        }
        for(i=0;i<=L;i++){
            if(b[i]==0)
                t++;
        }
        printf("%d",t);
        return 0;
}
