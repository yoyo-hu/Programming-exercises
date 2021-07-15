#include <stdio.h>
void merge(int be[505][505],int end,int len, int* to) {
	for (int i = 0; i < len; i++) {
			to[i] += be[end][i];
	}
}
int obj[505][505];
int main() {
	int n, m;
	scanf("%d%d", &n, &m);
	int max = -1005;
	int sum;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			scanf("%d", &obj[i][j]);
	}
	for (int start = 0; start < n; start++) {
		int temp[505] = { 0 };
		for (int end = start; end < n; end++) {
			int sum = 0;
			merge(obj,end,m-1, temp);
			for (int i = 0; i < m-1; i++) {
				sum += temp[i];
				if (sum > max)
					max = sum;
				if (sum < 0)
					sum = 0;
			}
		}
	}
	printf("%d", max);
}