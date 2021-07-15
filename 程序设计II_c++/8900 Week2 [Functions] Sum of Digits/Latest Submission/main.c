#include "Simple.h"
#include <stdio.h>

int main() {
  int t;
  unsigned int n;
  scanf("%d", &t);
  while (t--) {
    scanf("%u", &n);
    printf("%d\n", sumDigits(n));
  }
  return 0;
}
