#include "date.h"
#include <stdio.h>
#include <assert.h>

void TestDate(Date* date, int after, int before) {
  printf("Year: %d\n", GetYear(date));
  printf("Month: %d\n", GetMonth(date));
  printf("Day: %d\n", GetDay(date));

  char* date_string = GetDateString(date);
  printf("Formatted: %s\n", date_string);

  DestroyDateString(&date_string);
  assert(date_string == NULL);
  DestroyDateString(&date_string);

  IncreaseDate(date);
  date_string = GetDateString(date);
  printf("1 day later: %s\n", date_string);
  DestroyDateString(&date_string);

  int i;
  for (i = 0; i < after; ++i) {
    IncreaseDate(date);
  }
  date_string = GetDateString(date);
  printf("Another %d day(s) later: %s\n", after, date_string);
  DestroyDateString(&date_string);

  for (i = 0; i < before; ++i) {
    DecreaseDate(date);
  }
  date_string = GetDateString(date);
  printf("Another %d day(s) earlier: %s\n", before, date_string);
  DestroyDateString(&date_string);  
}

int main() {
  int year, month, day;
  int after, before;
  scanf("%d%d%d%d%d", &year, &month, &day, &after, &before);

  Date* date1 = CreateDate(year, month, day);
  assert(sizeof(*date1) == sizeof(Date));

  Date* date2 = CopyDate(date1);
  assert(date1 != date2);
  assert(date1->month == date2->month);

  SetDate(date1, year + 1, month, day);
  SetYear(date1, year);
  SetMonth(date1, month);
  SetDay(date1, day);

  TestDate(date1, after, before);

  DestroyDate(&date1);
  DestroyDate(&date2);

  assert(date1 == NULL);
  DestroyDate(&date2);

  return 0;
}

/*
One probable test case:

1900 2 28 365 366
Year: 1900
Month: 2
Day: 28
Formatted: 1900-02-28
1 day later: 1900-03-01
Another 365 day(s) later: 1901-03-01
Another 366 day(s) earlier: 1900-02-28

*/