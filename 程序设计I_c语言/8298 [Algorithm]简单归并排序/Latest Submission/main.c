#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int n;
void sort(int b[], int left, int right);
void merge(int b[], int left, int mi, int right);
int main() {
	int a[105];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	sort(a, 0, n - 1);
	return 0;
}
void sort(int b[], int left, int right) {
	if (left >= right);
	else {
		int mi = (left + right) / 2;
		sort(b, left, mi);
		sort(b, mi + 1, right);
		merge(b, left, mi, right);

	}
}
void merge(int b[], int left, int mi, int right) {
	int* c = (int*)malloc((right - left + 1) * sizeof(int));
	int i = left;
	int j = mi+1;
	int t = 0;
	while(i <= mi && j <=right) {
		if (b[i] <= b[j])
			c[t++] = b[i++];
		else
			c[t++] = b[j++];
	}
	while (i <= mi)
		c[t++] = b[i++];
	while (j <= right)
		c[t++] = b[j++];
		t = 0;
	while (left <= right)
		b[left++] = c[t++];
    free(c);
	for (int i = 0; i < n-1; i++)
		printf("%d ", b[i]);
	printf("%d\n", b[n - 1]);
	}