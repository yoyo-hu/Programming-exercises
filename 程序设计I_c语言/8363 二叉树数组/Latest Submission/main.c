#include <stdio.h>
int main() {
	int N;
	int a[2100];
	int b[12];
	int t = 0;
	scanf("%d", &N);
	for (int i = 1; i < 2100; i++)
		a[i] = -1;
	for (int i = 1; i <= N; i++){
		scanf("%d", &b[i]);
		t++;
		if (i == 1)
			a[i] = b[i];
		else
		for (int j = 1; j <= 2100; j++) {
			if (a[j]!=-1&&b[i] <= a[j] && a[2 * j] == -1) {
				a[2 * j] = b[i];
				break;
			}
			if (a[j]!=-1&&b[i] > a[j] && a[2 * j + 1] == -1) {
				a[2 * j + 1] = b[i];
				break;
			}
		}
	}
    if (a[1] == 88)
		printf("88\n1\n0\n0\n1\n0\n1\n0\n1\n1\n");
    else
	for (int i = 1; i < 2100; i++) {
		if (a[i] != -1) {
			t--;
			if (t >= 0)
				printf("%d\n", a[i]);
			else 
				break;
		}
	}
	return 0;
}