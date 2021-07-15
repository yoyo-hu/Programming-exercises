#include <stdio.h>
typedef struct peo {
	int mark;
	int time;
	int cost;
}peo;
void sort(peo* a,int m) {
	peo mi;
	for (int i = 0; i < m - 1; i++) {
		for (int j = 0; j < m - 1 - i; j++) {
			if (a[j].time > a[j + 1].time) {
				mi = a[j];
				a[j] = a[j+ 1];
				a[j + 1] = mi;
			}
		}
	}
}
void marksort(peo* a,int* b, int m) {
	peo mi;
	int mib;
	for (int i = 0; i < m - 1; i++) {
		for (int j = 0; j < m - 1 - i; j++) {
			if (a[j].mark> a[j + 1].mark) {
				mi = a[j];
				a[j] = a[j + 1];
				a[j + 1] = mi;
				mib = b[j];
				b[j] = b[j + 1];
				b[j + 1] = mib;
			}
		}
	}
}
int main() {
	int n;
	int timesum = 0;
	peo sub[1005];
	int ans[1005];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		sub[i].mark = i;
		scanf("%d%d", &sub[i].time, &sub[i].cost);
	}
	sort(sub,n);
	for (int i = 0; i < n; i++) {
		if (i == 0) {
			timesum = sub[i].time + sub[i].cost;
			ans[i] = timesum;
		}
		else {
			if (sub[i].time > timesum) {
				timesum = sub[i].time + sub[i].cost;
				ans[i] = timesum;
			}
			else {
				timesum += sub[i].cost;
				ans[i] = timesum;
			}
		}
	}
	marksort(sub,ans, n);
	for (int i = 0; i < n; i++) {
		if (i == 0)
			printf("%d", ans[i]);
		else
			printf(" %d", ans[i]);
	}
	return 0;
}