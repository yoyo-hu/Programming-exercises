#include <stdio.h>

int main() {
	int t, n, num[1001];
	int i, j, k;
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		for (int i = 0; i < n; i++) {
			scanf("%d", &num[i]);
		}
		for (i = 0; i < n-1; i++) {
			k = i;
			for (j = i+1; j < n; j++) {
				if (num[k] > num[j]) k = j; // 标记最小值的下标
			}
			int temp = num[i];
			num[i] = num[k];
			num[k] = temp;
			for (int x = 0; x < n; x++) {
				printf("%d%c", num[x], (x == n-1) ? '\n' : ' ');
			}
		}
	}
	return 0;
}