#include <stdio.h>
int a[10000];
int main() {
	int T;
	int i;
	int t=0;
	int max;
	scanf("%d", &T);
	for (; T > 0; T--) {
		int N;
		max = 0;
		scanf("%d", &N);
		for (i = 0; i < N; i++) {
			scanf("%d", &a[i]);
		}
		for (i = 0; i < N; i++) {
			if (a[i] > max) {
				max = a[i];
				t = i;
			}
		}
		a[t] = 0;
		max = 0;
		for (i = 0; i < N; i++) {
			
			if (a[i] > max) 
				max = a[i];
			}
		printf("%d\n", max);

	}
	return 0;
}
