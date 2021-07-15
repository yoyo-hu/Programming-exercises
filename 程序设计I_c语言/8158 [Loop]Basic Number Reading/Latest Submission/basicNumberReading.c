#include <stdio.h>
#include <string.h>
int main() {
	int T, n;
	int i;
	int k;
	scanf("%d%d", &T, &n);
	for (i = 0; i < T; i++) {
		int b = 0, c = 0;
		char a[10] = { '0' };
		scanf("%s", a);
		k = strlen(a);
		for (int j = 0; j < k; j++)
			b = ((int)a[j] - 48) + b * n;
		printf("%d ", b);
		int t = b;
		for (int j = 0; j < k; j++) {
			c = c * n + t%n;
			t/=n;
		}
		printf("%d\n", c);
	}
	return 0;
}