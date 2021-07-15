#include <stdio.h>
#include <ctype.h>
#include <string.h>

int getNumber(int digit[], int len) {
 int i, p = 1, result = 0;
 for (i = len-1; i >= 0; --i) {
  result += digit[i] * p;
  p *= 10;
 }
 return result;
}

int main() {
 char str[101];
 int digit[10], num;
 int i = 0, j = 0, k = 0;
 scanf("%s", str);
 for (i = 0; i < strlen(str); ++i) {
  if (!isdigit(str[i+1])) {
   printf("%c", str[i]);
  } else {
   k = 0;
   for (j = i+1; j < strlen(str) && isdigit(str[j]); ++j) {
    digit[k++] = str[j] - '0';
   }
   num = getNumber(digit, k);
   if (num > 7) num = num % 7 + 1;
   for (j = 0; j < num; ++j) {
    printf("%c", str[i]);
   }
   i += k;
  }
 }
 printf("\n");
 return 0;
}