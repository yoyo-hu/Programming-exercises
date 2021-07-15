#include <stdio.h>
int common_divisor(int x, int y);
int main() {
	int T;
	int n, a, b;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		if (i != 0)
			printf("\n");
		scanf("%d%d", &n, &a);
		for (int j = 0; j < n; j++) {
			scanf("%d", &b);
			if (a > b)
				a += b;
			else
				a += common_divisor(a, b);
		}
		printf("%d", a);
	}
	return 0;
}
int common_divisor(int x, int y) {
	for (int i = x; i >= 1; i--) {
		if (x % i == 0 && y % i == 0)
			return i;
	}
}