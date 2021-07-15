#ifndef DATE_H_
#define DATE_H_

typedef struct {
  int year, month, day;
} Date;

Date* CreateDate(int year, int month, int day);
void DestroyDate(Date** p);
Date* CopyDate(const Date* date);

int GetYear(const Date* date);
int GetMonth(const Date* date);
int GetDay(const Date* date);
void SetYear(Date* date, int year);
void SetMonth(Date* date, int month);
void SetDay(Date* date, int day);
void SetDate(Date* date, int year, int month, int day);

char* GetDateString(const Date* date);
void DestroyDateString(char** p);

void IncreaseDate(Date* date);
void DecreaseDate(Date* date);

#endif