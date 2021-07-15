#include <stdio.h>
#include <math.h>
int a[100005];
int b[33][3] = { 0 };
int main() {
	int n;
	int sum=0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		int temp = a[i];
		int wei = 0;
		while (temp != 0) {
			b[wei][temp % 2]++;
			temp /= 2;
			wei++;
		}
	}
		for (int i = 32; i >= 0; i--) {
			for (int j = 0; j < 3; j++) {
				if (b[i][j] % 2 != 0)
					sum += (j * pow(2.0, i));
			}
		}
	printf("%d", sum);
	return 0;
}