#include <stdio.h>
int a[20005];
int main() {
	int N, M;
	int x;//remark the operation
	int y;
	int b, c;
	long long add = 0;
	long long sum = 0;
	int t = 1;
	scanf("%d%d", &N, &M);
	for (int i = 1; i <= N; i++)
		scanf("%d", &a[i]);
	for (int i = 0; i < M; i++) {
		scanf("%d", &x);
		if (x == 1){
			t = -t;
			add=-add;
		}
		else if (x == 2) {
			scanf("%d", &y);
			add += y;
		}
		else if (x == 3) {
			sum = 0;
			scanf("%d%d", &b, &c);
			for (int k = b; k <= c; k++)
				sum += (a[k]*t+add);
			printf("%ld\n", sum);
		}
	}
	return 0;
}
