#include "date.h"
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
Date *CreateDate(int year, int month, int day)
{
    Date *p = (Date *)malloc(sizeof(Date));
    p->year = year;
    p->month = month;
    p->day = day;
    return p;
}
void DestroyDate(Date **p)
{
    if (*p != NULL)
        free(*p);
    *p = NULL;
}
Date *CopyDate(const Date *date)
{
    Date *p = (Date *)malloc(sizeof(Date));
    p->year = date->year;
    p->month = date->month;
    p->day = date->day;
    return p;
}

int GetYear(const Date *date)
{
    return date->year;
}
int GetMonth(const Date *date)
{
    return date->month;
}
int GetDay(const Date *date)
{
    return date->day;
}
void SetYear(Date *date, int year)
{
    date->year = year;
}
void SetMonth(Date *date, int month)
{
    date->month = month;
}
void SetDay(Date *date, int day)
{
    date->day = day;
}
void SetDate(Date *date, int year, int month, int day)
{
    date->year = year;
    date->month = month;
    date->day = day;
}

char *GetDateString(const Date *date)
{
    char *s = (char *)malloc(sizeof(char) * 11);
    memset(s, '0', sizeof(char) * 11);
    int index = 3;
    int temp = date->year;
    while (temp)
    {
        s[index--] = temp % 10+'0';
        temp /= 10;
    }
    s[4] = '-';
    index = 6;
    temp = date->month;
    while (temp)
    {
        s[index--] = temp % 10+'0';
        temp /= 10;
    }
    s[7] = '-';
    index = 9;
    temp = date->day;
    while (temp)
    {
        s[index--] = temp % 10+'0';
        temp /= 10;
    }
    s[10] = '\0';
    return s;
}
void DestroyDateString(char **p)
{
    if (*p != NULL)
        free(*p);
    *p = NULL;
}

void IncreaseDate(Date *date)
{
    date->day++;
    int m = date->month;
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
    {
        if (date->day > 31)
        {
            date->day -= 31;
            date->month++;
        }
    }
    else if (m == 2)
    {
        if ((date->year % 4 == 0&&date->year % 100 != 0)||date->year % 400 == 0)
        {
            if (date->day > 29)
            {
                date->day -= 29;
                date->month++;
            }
        }
        else
        {
            if (date->day > 28)
            {
                date->day -= 28;
                date->month++;
            }
        }
    }
    else
    {
        if (date->day > 30)
        {
            date->day -= 30;
            date->month++;
        }
    }
    if (date->month > 12)
    {
        date->month -= 12;
        date->year++;
    }
}
void DecreaseDate(Date *date)
{
    date->day--;
    int m = date->month;
    if (date->day == 0)
    {
        if (m == 1)
        {
            date->year--;
            date->month=12;
            date->day = 31;
        }
        else if ( m == 5 || m == 7 || m == 10 || m == 12)
        {
            date->month--;
            date->day = 30;
        }
        else if (m == 3)
        {
            date->month--;
            if ((date->year % 4 == 0&&date->year % 100 != 0)||date->year % 400 == 0)
                    date->day = 29;
            else
                    date->day = 28;
        }
        else
        {
            date->month--;
            date->day = 31;
        }
    }
}