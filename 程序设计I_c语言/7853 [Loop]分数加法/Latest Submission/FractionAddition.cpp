#include <stdio.h>
int main() {
	int T;
	int a, b, c, d, e, f;
	int i;
	scanf("%d", &T);
	for (; T > 0; T--) {
		scanf("%d%d%d%d", &a, &b, &c, &d);
		e = a * d + b * c;
		f = b * d;
		for (i = 2; i <= e && i <= f; i++) {
			while(e % i == 0 && f % i == 0) {
				e /= i;
				f /= i;
			}
		}
		printf("%d %d\n", e, f);
	}

	return 0;
}