#include <stdio.h>
#include "source.h"


void printtotal(int total) {
    printf("Total in Main: %d\n", total);

}
int main() {

  int x, y, total;
  x = 10;
  y = 5;
  total = 0;

  printtotal(total);
  addxy(x, y, total);

  printtotal(total);

  subxy(x, y, total);
  printtotal(total);
  return 0;
}
