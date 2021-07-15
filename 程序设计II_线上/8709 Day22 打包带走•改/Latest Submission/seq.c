#include <stdio.h>
int main() {
	int result = -100000;
	int sum = 0;
	int n;
	int x;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &x);
		sum += x;
		if (sum > result)
			result = sum;
		if (sum < 0)
			sum = 0;
	}
	printf("%d", result);
}