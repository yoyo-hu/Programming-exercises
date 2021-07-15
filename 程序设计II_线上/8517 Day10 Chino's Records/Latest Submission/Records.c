#include <stdio.h>
typedef struct rab {
	int fuz;
	int agile;
	int combat;
}rab;
rab sub[233335];
int cmp(rab* a, rab* b) {
	if (a->fuz >b->fuz)
		return 1;
	else if (a->fuz == b->fuz && a->agile < b->agile)
		return 1;
	else if (a->fuz == b->fuz && a->agile == b->agile && a->combat > b->combat)
		return 1;
	return 0;
}
void quick_sort(rab* a, int left, int right) {
	if (left >= right)
		return;
	int i = left;
	int j = right;
	rab base = a[i];
	while (i != j) {
		while (i < j &&  !cmp(&a[j],&base))
			j--;
		if (j > i)
			a[i++] = a[j];
		while (i < j && cmp(&a[i], &base))
			i++;
		if (j > i)
			a[j--] = a[i];
	}
	a[i] = base;
	quick_sort(a, left, i - 1);
	quick_sort(a, i + 1, right);
}
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &sub[i].combat, &sub[i].agile, &sub[i].fuz);
	}
	quick_sort(sub, 0, n);
	for (int i = 0; i < n; i++) {
		if (i == n - 1) {
			if (i != 0 && sub[i].agile == sub[i - 1].agile && sub[i].combat == sub[i - 1].combat && sub[i].fuz == sub[i - 1].fuz);
			else
				printf("%d %d %d\n", sub[i].combat, sub[i].agile, sub[i].fuz);
		}
		else {
			if (i != 0 && sub[i].agile == sub[i - 1].agile && sub[i].combat == sub[i - 1].combat && sub[i].fuz == sub[i - 1].fuz);
			else
				printf("%d %d %d\n", sub[i].combat, sub[i].agile, sub[i].fuz);
		}

	}
	return  0;
}