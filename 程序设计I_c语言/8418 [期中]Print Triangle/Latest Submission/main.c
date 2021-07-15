#include <stdio.h>
int main() {
	int N;
	scanf("%d", &N);
	int k1 = N - 1;
	int k2 = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < k1; j++)
			printf(" ");
		if (i == 0)
			printf("*\n");
		else if (i == N - 1) {
			for (int j = 0; j < 2 * N - 1; j++)
				printf("*");
		}
		else {
			printf("*");
			for (int j = 0; j < k2; j++)
				printf(" ");
			printf("*\n");
		}
		if (i == 0)k2++;
		else
			k2 += 2;
		k1--;
	}
	return 0;
}