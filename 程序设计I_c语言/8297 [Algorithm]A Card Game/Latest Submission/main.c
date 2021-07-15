#include <stdio.h>
int a[100005];
void quick_sort(int b[],int left,int right);
int main(){
    int n;
    int t=0;
    int sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(t==0&&a[i]==0)
            t=1;
        sum+=a[i];
    }
    if(t==0||sum%3!=0||sum==0)
        printf("no such number\n");
    else{
        quick_sort(a,0,n-1);
       for(int i=0;i<n;i++)
        printf("%d",a[i]);
    }
    return 0;
}
void quick_sort(int b[],int left,int right){
    if(left>=right);
    else{
    int i=left;
    int j=right;
    int base=b[i];
    while(i!=j){
    while(i<j&&b[j]<base)
        j--;
    if(i<j)
        b[i++]=b[j];
    while(i<j&&b[i]>base)
        i++;
    if(i<j)
        b[j--]=b[i];
    }
    b[i]=base;
    quick_sort(b,left,i-1);
    quick_sort(b,i+1,right);}
}
