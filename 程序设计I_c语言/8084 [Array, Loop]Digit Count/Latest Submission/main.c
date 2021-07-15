#include <stdio.h>
int main(){
        int T;
        int i;
        int x;
       scanf("%d",&T);
        for(i=0;i<T;i++){
            int a[11]={0};
            scanf("%d",&x);
            for(int j=1;j<=x;j++){
                if(j<10)
                    a[j]++;
                else if(j<100){
                    a[j%10]++;
                    a[j/10]++;}
                    else if(j<1000){
                        a[j%10]++;
                        a[j/10%10]++;
                        a[j/100]++;
                    }
            }
            for(int j=0;j<9;j++)
            printf("%d ",a[j]);
            printf("%d\n",a[9]);
        }
        return 0;
}
