#include <stdio.h>
#include <stdlib.h>
int maxHeap[1000006];
int numOfHeap = 0;
void swap(int* a, int* b) {
	int mi;
	mi = *a;
	*a = *b;
	*b = mi;
}
void maxHeapFixDown(int father) {
	int temp = maxHeap[father];
	int son = father * 2 + 1;
	while (son < numOfHeap) {
		if (son + 1 < numOfHeap && maxHeap[son + 1] > maxHeap[son])
			son += 1;
		if (maxHeap[father] < maxHeap[son]) {
			swap(&(maxHeap[father]), &(maxHeap[son]));
		}
		else
			break;
		father = son;
		son = father * 2 + 1;
	}
}
void CreateHeap(int n) {
	for (int i = (n - 2) / 2; i >= 0; i--) {
		maxHeapFixDown(i);
	}
}
void DeleteHeap() {
	maxHeap[0] = maxHeap[numOfHeap - 1];
	numOfHeap--;
	maxHeapFixDown(0);
}
void GetMax() {
	printf("%d\n", maxHeap[0]);
	DeleteHeap();
}
void MinHeapFixup(int a) {
	int j = (numOfHeap - 1) / 2;
	int i = numOfHeap;
	maxHeap[i] = a;
	for (i = numOfHeap; j >= 0&&maxHeap[i]> maxHeap[j]; i = j, j = (i - 1) / 2) {
		swap(&(maxHeap[i]), &(maxHeap[j]));
	}
	numOfHeap++;
}
int main() {
	int n, m;
	char mark;
	int temp;
	scanf("%d%d", &n, &m);
	numOfHeap = n;
	for (int i = 0; i < n; i++) {
		scanf("%d", &maxHeap[i]);
	}
	CreateHeap(n);
	for (int i = 0; i < m; i++) {
		scanf("\n%c", &mark);
		if (mark == 'q')
			GetMax();
		else {
			scanf("%d", &temp);
			MinHeapFixup(temp);
		}
	}
	while(numOfHeap > 0) {
		GetMax();
	}
	return 0;
}