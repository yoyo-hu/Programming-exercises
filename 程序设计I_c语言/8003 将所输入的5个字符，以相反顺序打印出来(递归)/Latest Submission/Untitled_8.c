#include <stdio.h>
#include <string.h>
int x(int);
char a[6];
int main(){
    scanf("%s",a);
    int k=strlen(a)-1;
    x(k);
    return 0;
}
int x(int n){
    if(n==0)
        printf("%c\n",a[0]);
    else if(n>=0){
    printf("%c",a[n]);
    return x(n-1);
    }
    else
    return 0;
}
