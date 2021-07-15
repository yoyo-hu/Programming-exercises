#include <stdio.h>
int main() {
  int year = 0, month = 0;

  scanf("%d %d", &year, &month);

    // Is the input invalid?
  if (year < 0 || 9999 < year || month < 1 || 12 < month) {
    printf("Invalid Input Detected.\n");
    return 0;
  }

    // Is it a leap year?
  int isLeap = 0;
  if ( (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0) ) {
    isLeap = 1;
  }

  int day = 0;
  switch (month) {
    case 2:
      day = 28 + isLeap;
      break;
    case 4:
    case 6:
    case 9:
    case 11:
      day = 30;
      break;
    default:
      day = 31;
      break;
  }

  printf("%.4d/%.2d has %d days.\n", year, month, day);
  return 0;
}

