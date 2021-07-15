#include <stdio.h>
int main() {
	int t;
	int m;
	char a[105][10];
	char r[10];
	int mark[105];
	int mis,mim;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		int score[105] = { 0 };
		scanf("%d", &m);
		for (int j = 0; j < m; j++) {
			mark[j] = j;
			scanf("\n%c ", &a[j][0]);
			for (int k = 1; k < 10; k++)
				scanf("%c ",&a[j][k]);
		}
			scanf("\n%c ", &r[0]);
		for (int k = 1; k < 10; k++)
			scanf("%c ", &r[k]);
		for (int j = 0; j < m; j++) {
			for (int k = 0; k < 10; k++)
				if (a[j][k] == r[k])
					score[j]++;
		}
		for (int j = 0; j < m - 1; j++) {
			for (int k = 0; k < m - j - 1; k++) {
				if (score[k] > score[k + 1]) {
					mis = score[k];
					score[k] = score[k + 1];
					score[k + 1] = mis;
					mim = mark[k];
					mark[k] = mark[k + 1];
					mark[k + 1] = mim;
				}
			}
		}
		printf("test case %d:\n", i+1);
		for (int j = 0; j < m; j++)
			printf("Student %d: %d\n", mark[j], score[j]);
	}
	return 0;
}