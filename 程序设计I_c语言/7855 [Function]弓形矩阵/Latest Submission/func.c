#include "func.h"
void printMatrix(int m, int n) {
	int a[10][10];
	int i, j;
	int t = 1;
	for (i = 0; i < m; i++) {
		if (i % 2 == 0)
			for (j = 0; j < n; j++) {
				a[i][j] = t;
				t++;
			}
		else
			for (j = n - 1; j >= 0; j--) {
				a[i][j] = t;
				t++;
			}
	}
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++)
			printf("%3d", a[i][j]);
		printf("\n");
	}
 }