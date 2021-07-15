#include <stdio.h>
int main() {
    int year,month;
    int day=31;
    scanf("%d%d",&year,&month);
    if(year<0||year>9999||month<1||month>12){
        printf("Invalid Input Detected.\n");
    }
    else{
        if(month==2){
        if(year%400==0||(year%100!=0&&year%4==0))
        day=29;
        else
        day=28;
    }
    if(month==4||month==6||month==9||month==11)
        day=30;
    printf("%04d/%02d has %d days.\n",year,month,day);
    }

    return 0;
}
