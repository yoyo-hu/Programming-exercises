#include <stdio.h>
int main() {
  int caseNum = 0, caseIndex = 0;
  int num = 0, reversedNum = 0, base = 0, weight = 0, digit = 0;
  scanf("%d %d", &caseNum, &base);
  for (char c = 0; caseIndex < caseNum; ++caseIndex) {
    num = 0, reversedNum = 0, weight = 1;
    for (scanf(" %c", &c); '0' <= c && c <= '9'; c = getchar()) {
      digit = c - '0';
      num = num * base + digit;
      reversedNum += digit * weight;
      weight *= base;
    }
    printf("%d %d\n", num, reversedNum);
  }
}

