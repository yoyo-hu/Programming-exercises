#include <stdio.h>
int opr[500005] = { 0 };
int re[500005];
int a[500005];
int main() {
	int t;
	scanf("%d",&t);
	for (int i = 0; i < t; i++) {
		int n, m;
		int x,d,k;
		scanf("%d%d",&n,&m);
		for (int i = 1; i <= n; i++)
			a[i] = i;
		for (int i = 0; i < m; i++) {
			scanf("%d", &x);
			scanf("%d%d",&d,&k);
			opr[k] = x;
			re[k] = d;
			a[d] = 0;
		}
		for (int i = 1; i <= n; i++) {
			if (a[i] == 0);
			else {
				if (opr[i] == 0)
					printf("%d ", a[i]);
				else {
					if (opr[i] == 1)
						printf("%d %d ", re[i], a[i]);
					else
						printf("%d %d ", a[i], re[i]);
					opr[i] = 0;
				}
			}
		}
		if(i!=t-1)
			printf(" \n");
	}
	return 0;
}