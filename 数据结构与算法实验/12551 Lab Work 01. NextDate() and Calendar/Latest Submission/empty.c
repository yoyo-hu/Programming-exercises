#include <stdio.h>
struct date{
    int month;
    int day;
    int year;
};
int isLeapYears(int year){
    if(year%400==0)
       return 1;
    if(year%100==0)
        return 0;
    else if(year%4==0)
        return 1;
    return 0;
}
int is31days(int month){
    if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
    return 1;
    return 0;
}
struct date NextDate(int year,int month,int day){
    struct date next;
    next.year=year;
    next.month=month;
    next.day=day;
    int year_flag=isLeapYears(year);
    int month_flag=is31days(month);
    if(month_flag==1){
        if(next.day==31){
            next.day=1;
            next.month++;
            if(next.month==13){
                next.month=1;
                next.year++;
            }
        }
        else
        next.day++;
    }
    else{
        if(month==2){
            if(next.day==29){
            next.day=1;
            next.month++;
            if(next.month==13){
                next.month=1;
                next.year++;
                }
            }
            else
            next.day++;
        }
        else{
            if(next.day==28){
            next.day=1;
            next.month++;
            if(next.month==13){
                next.month=1;
                next.year++;
                }
            }
            else
            next.day++;
        }
    }
    return next;
}
void print_month_title(int x){
    switch (x){
        case 1:
            printf("    JANUARY     \n");
            break;
        case 2:
            printf("    FEBRUARY     \n");
            break;
        case 3:
            printf("    MARCH     \n");
            break;
        case 4:
            printf("    APRIL     \n");
            break;
        case 5:
            printf("    MAY     \n");
            break;
        case 6:
            printf("    JUNE     \n");
            break;
        case 7:
            printf("    JULY     \n");
            break;
        case 8:
            printf("    AUGUST     \n");
            break;
        case 9:
            printf("    SEPTEMBER     \n");
            break;
        case 10:
            printf("    OCTOBER     \n");
            break;
        case 11:
            printf("    NOVEMBER     \n");
            break;
        case 12:
            printf("    DECEMBER     \n");
            break;
        default:
            break;
    }
}
void print_weed_title(){
    printf("SUN MON TUE WED THU FRI SAT \n");
}
void printDay(int* frist_day,int month){
    int allDay;
    if(is31days(month)==1)allDay=31;
    else if(month==2)allDay=29;
    else allDay=30;
    int mark=0;
    for(int i=1;i<=allDay;i++){
        if(mark==7){
            printf("\n");
            mark=0;}
        while((* frist_day)!=0){
            printf(("    "));
            (* frist_day)--;
            mark++;
        }
        printf("%4d",i);
        mark++;
    }
    (* frist_day)=mark-1;
}
void PrintCalendar(){
    printf("    2021    \n");
    printf("    MONTHLY CALENDAR    \n");
    int month_frist_day=5;
    for(int i=1;i<=12;i++){
    printf("------------------------------\n");
    
    print_month_title(i);
    printf("------------------------------\n");
    print_weed_title();
    printf("------------------------------\n");
    printDay(&month_frist_day,i);
    printf("\n");
    }
}
int main(){
    struct date next;
    int cur_month;
    int cur_day;
    int cur_year;
    scanf("%d%d%d",&cur_year,&cur_month,&cur_day);
    next=NextDate(cur_year,cur_month,cur_day);
    //print next data;
    printf("%d_%d_%d\n",next.year,next.month,next.day);
    //Print a calendar of year 2021;
    PrintCalendar();
    return 0;
}
