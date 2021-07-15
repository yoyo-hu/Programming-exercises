#include <stdio.h>
#include <stdlib.h>
#include "cmpMatrices.h"
int main() {
  size_t total = 0, size = 0;
  scanf("%zu%zu", &total, &size);
  int matrixArr[MAX_TOTAL][MAX_SIZE][MAX_SIZE] = {0};
  for (size_t matrixIndex = 0; matrixIndex < total; ++matrixIndex) {
    inputMatrices(matrixArr[matrixIndex], size);
  }
  qsort_r(matrixArr, total, sizeof(matrixArr[0]), &cmpMatrices, &size);
  for (size_t matrixIndex = 0; matrixIndex < total; ++matrixIndex) {
    printMatrices(matrixArr[matrixIndex], size);
  }
  return 0;
}
