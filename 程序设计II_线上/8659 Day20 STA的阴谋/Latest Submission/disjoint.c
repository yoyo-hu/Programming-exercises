#include <stdio.h>
int uset[1000006];
void makeUset(int n) {
	for (int i = 0; i < n; i++)
		uset[i] =-1;
}
int getuset(int a) {
	if (uset[a] < 0)
		return a;
	else return getuset(uset[a]);
}
void connect(int a, int b) {
	int i = getuset(a);
	int j = getuset(b);
	if (i==j)
		return;
	else {
		if (uset[i] <= uset[j]) {
			uset[i] += uset[j];
			uset[j] = i;
		}
		else {
			uset[j] += uset[i];
			uset[i] = j;
		}
	}
}
int ifConnect(int a, int b) {
	if (getuset(a) == getuset(b))
		return 1;
	else
		return 0;
}
int main() {
	int n, m;
	int x, y;
	char mark;
	scanf("%d%d", &n, &m);
	makeUset(n);
	for (int i = 0; i < m; i++) {
		scanf("\n%c", &mark);
		if (mark == 'c') {
			scanf("%d%d", &x, &y);
			connect(x, y);
		}
		else if (mark == 'q') {
			scanf("%d%d", &x, &y);
			if (ifConnect(x, y))
				printf("Connected!\n");
			else
				printf("Not connected!\n");
		}
	}
	return 0;
}