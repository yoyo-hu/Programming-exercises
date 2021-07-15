#include<stdio.h>
bool b[100005] = { 0 };
int oper[100005];
int main() {
	int n, m;
	scanf("%d%d", &n, &m);
	for (int i = 0; i < m; i++) {
		scanf("%d", &oper[i]);
	}
	for (int i = m - 1; i >= 0; i--) {
		if (!b[oper[i]]) {
			printf("%d ", oper[i]);
			b[oper[i]] = 1;
		}
	}
	for (int i = 1; i <=n; i++) {
		if (!b[i]) {
			printf("%d ", i);
			b[i] = 1;
		}
	}
	return 0;
}