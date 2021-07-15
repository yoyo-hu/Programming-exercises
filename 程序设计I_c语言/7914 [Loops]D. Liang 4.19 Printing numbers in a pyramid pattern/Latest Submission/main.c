#include <stdio.h>
#include <math.h>
int main() {
	int n;
	int i, j, k, t;
	int x,y;
	scanf("%d", &n);
	x = n * 5 - 5;
	for (i = 1; i <= n; i++) {
		y = (int)pow(2, i);
		for (k = 1; k <= x; k++)
			printf(" ");
		for (j = 1; j < y; j*=2) {
			printf("%5d", j);
		}
		for (t = j / 4; t >= 1; t /= 2)
			printf("%5d", t);
		x -= 5;
		printf("\n");
	}
	return 0;
}

