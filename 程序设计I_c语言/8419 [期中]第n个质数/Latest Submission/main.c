#include <stdio.h>
int main() {
	int n;
	int i = 2, j = 2;
	scanf("%d", &n);
	for (i = 2;n!=0; i++) {
		for (j = 2; j < i; j++)
			if (i % j == 0)
				break;
		if (j == i)
			n--;
	}
	printf("%d", i - 1);
	return 0;
}