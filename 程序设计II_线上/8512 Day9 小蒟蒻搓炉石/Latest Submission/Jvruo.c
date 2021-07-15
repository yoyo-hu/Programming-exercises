#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	int A[1000];
	int n, m, k;
	int mark = 0;
	scanf("%d%d%d", &n, &m, &k);
	int sum = n;
	for (int i = 0; i < m; i++) {
		scanf("%d",&A[i] );
	}
	for (int i = 1; i <= k; i++) {
		if (i == A[mark]) {
			A[m%1000] = i + sum;
			m=(m+1)%1000;
			mark=(mark+1)%1000;
		}
		else {
			sum++;
		}
	}
	printf("%d", sum);
}