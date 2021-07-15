#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
  int test, t, n, m, i, j, k, ans;
  scanf("%d%d", &m, &n);
  n <<= 1;
  ans = 0;
  for (j = 0; j * j <= n; j++) { }
  for (i = j - 1; i > 0; i--)
  if (n % i == 0) {
    j = n / i;
    if (j - i - 1 >= 0 && (j - i - 1) % 2 == 0 && (j - i - 1) / 2 + i <= m)
    printf("[%d,%d]\n", (j - i - 1) / 2 + 1, (j - i - 1) / 2 + i);
  }
}
