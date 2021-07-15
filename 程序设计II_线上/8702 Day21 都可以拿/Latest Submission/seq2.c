#include <stdio.h>
int sum[100000] = { 0 };
int main() {
	int n, m;
	int x;
	int l, r;
	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; i++) {
		scanf("%d", &x);
		sum[i + 1] = sum[i] + x;
	}
	for (int i = 0; i < m; i++) {
		scanf("%d%d", &l, &r);
		printf("%d\n", sum[r] - sum[l - 1]);
	}
	return 0;
}