#include <stdio.h>
int main() {
	int x;
	int a, b ,c;

	scanf("%d%d%d", &a, &b, &c);
	for (x = 1;; x++) {
		if (x % 3 == a && x % 5 == b && x % 7 == c) {
			printf("%d", x);
			break;
		}
	}
	return 0;
} 