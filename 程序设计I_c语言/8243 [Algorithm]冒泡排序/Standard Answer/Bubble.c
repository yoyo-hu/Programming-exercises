#include <stdio.h>

void bubble_sort(int n, int num[]);

int main() {
	int n, t;
	int num[50];
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		for (int i = 0; i < n; i++) {
			scanf("%d", &num[i]);
		}
		bubble_sort(n, num);
	}
	return 0;
}
void bubble_sort(int n, int num[]) {
	int count = 0;
	for (int i = 0; i < n-1; i++) {
		count = 0;
		for (int j = 0; j < n-1-i; j++) {
			if (num[j] > num[j+1]) {
				count += 1;
				int temp = num[j];
				num[j] = num[j+1];
				num[j+1] = temp;
			}
			for (int x = 0; x < n; x++) {
				printf("%d ", num[x]);
			}
			printf("\n");
		}
		if (count == 0) break;
	}
}