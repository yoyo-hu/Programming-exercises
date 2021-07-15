#include "func.h"
#include <stdio.h>

void printMatrix(int m, int n) {
	int start = 0, increase = 1;
	for (int i = 1; i <= m; ++i) {
		if (i % 2 != 0) {
			start = n * (i-1) + 1;
			increase = 1;
		} else {
			start = n * i;
			increase = -1;
		}
		for (int j = 0; j < n; ++j) {
			printf("%3d", start + j * increase);
		}
		printf("\n");
	}
}