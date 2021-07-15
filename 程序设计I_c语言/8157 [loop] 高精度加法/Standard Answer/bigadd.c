#include <stdio.h>
#include <string.h>

void add(int a[], int b[], int c[]) {
  int car = 0;
  for (int i = 0; i < 110; i++) {
    c[i] = (a[i] + b[i] + car) % 10;
    car  = (a[i] + b[i] + car) / 10;
  }
}

void getInput(int array[]) {
  char str[110];
  // fgets(str, 110, stdin);
  scanf("%s", str);
  int length = strlen(str);
  for (int i = length - 1, j = 0; i >= 0; i--, j++) {
    array[j] = str[i] - '0';
  }
}

int main() {
  int biga[110] = {0};
  int bigb[110] = {0};
  int bigc[110] = {0};

  getInput(biga);
  getInput(bigb);

  add(biga, bigb, bigc);

  int flag = 1;
  for (int i = 110 - 1; i >= 0; i--) {
    if (flag && bigc[i] == 0) { continue; }
    else {
      flag = 0;
      printf("%d", bigc[i]);
    }
  }
  printf("\n");

  return 0;
}