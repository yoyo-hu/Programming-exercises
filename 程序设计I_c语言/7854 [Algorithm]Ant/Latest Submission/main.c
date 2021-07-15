#include <stdio.h>
int main() {
	int N;
	int L;
	int max=0;
	int x;
	char y;
	scanf("%d%d", &N, &L);
	for (; N > 0; N--) {
		scanf("\n%c", &y);
		scanf("%d", &x);
		if (y == 'R')
			x = L - x;
		if (x > max)
			max = x;
	}
	printf("%d", max);
	return 0;
}