
#include <stdio.h>
int a[500005], tmpA[500005], cnt = 0;
void merge_sort(int l, int r, int* A) {
	if (l == r) return;
	int mid = (l + r) /2;
	merge_sort(l, mid, A);
	merge_sort(mid + 1, r, A);
	int pl = l, pr = mid + 1, tmpp = 0;
	int count = 0;
	while (pl <= mid && pr <= r) {
		if (A[pl] <= A[pr]) tmpA[tmpp++] = A[pl++];
		else tmpA[tmpp++] = A[pr++], cnt+=(mid+1-pl);
	}
	while (pl <= mid) tmpA[tmpp++] = A[pl++];
	while (pr <= r) tmpA[tmpp++] = A[pr++];
	for (int i = 0; i < tmpp; i++) A[i + l] = tmpA[i];
}

int main() {
	int n,m;
	scanf("%d%d", &n,&m);
	for (int i = 1; i <= n; i++) {
		cnt = 0;
		for(int j=1;j<=m;j++)
			scanf("%d", &a[j]);
		merge_sort(1, m, a);
		if(cnt%2==0)
			printf("+\n");
		else
			printf("-\n");
	}
	return 0;
}