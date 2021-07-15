#include <stdio.h>
void print(int ,int );
int n;
int i = 0;
int c[105][105];
int main() {
	scanf("%d", &n);
	print(1, n);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j < n; j++) {
			printf("%d ", c[i][j]);
		}
		printf("%d\n",c[i][n]);
	}
}

void print(int a,int b) {
	int k;
	if (a == b){
		i++;
		c[a][b] = i;}
	else {
		for (int j = a; j <= b; j++) {
			i++;
			c[a][j] = i;
		}
		for (int j = a + 1; j <= b; j++) {
			i++;
			c[j][b] = i;
		}
		for (int j = b - 1; j >= a; j--) {
			i++;
			c[b][j] = i;
		}
		for (int j = b - 1; j > a; j--) {
			i++;
			c[j][a] = i;
		}
		if (a + 1 > b - 1);
		else
		print(a + 1, b - 1);
	}
}