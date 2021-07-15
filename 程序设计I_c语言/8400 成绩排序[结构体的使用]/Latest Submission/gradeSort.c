#include <stdio.h>
struct stu{
    int mark;
    char name[15];
    int score;
    };
int main(){
   struct stu a[105];
   struct stu mi;
   int n;
   scanf("%d",&n);
   for(int i=1;i<=n;i++){
        scanf("%d",&a[i].mark);
        scanf("%s",a[i].name);
        scanf("%d",&a[i].score);
   }
   for(int i=1;i<n;i++){
        for(int j=1;j<n-i+1;j++){
            if(a[j].score<a[j+1].score){
                mi=a[j];
                a[j]=a[j+1];
                a[j+1]=mi;
            }
              if(a[j].score==a[j+1].score&&a[j].mark>a[j+1].mark){
                        mi=a[j];
                        a[j]=a[j+1];
                        a[j+1]=mi;
                    }
        }
   }
   for(int i=1;i<=n;i++){
        printf("%d ",a[i].mark);
        printf("%s",a[i].name);
        printf(" %d",a[i].score);
        if(i!=n)
            printf("\n");
   }
    return 0;
}
