#include <stdio.h>
int main() {
	int n;
	int t;
	int a[35];
	int mi;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &t);
		for (int j = 0; j < t; j++)
			scanf("%d", &a[j]);
		for (int j = 0; j < t - 1; j++) {
			int p = 0;
			for (int k = 0; k < t - j - 1; k++) {
				if (a[k] > a[k + 1]) {
					mi = a[k];
					a[k] = a[k + 1];
					a[k + 1] = mi;
					p = 1;
				}
				for (int q = 0; q < t-1; q++)
					printf("%d ", a[q]);
				printf("%d\n", a[t - 1]);
			}
			if (p == 0)
				break;
		}
	}
	return 0;
}