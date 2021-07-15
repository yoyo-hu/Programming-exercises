#include <stdio.h>
void a(int i);
void b(int n,int i);
int main() {
	int p, n;
	int i;
	scanf("%d%d", &p, &n);
	switch (p) {
	case 1:
		for (i = 1; i <= n; i++)
			a(i);
		break;
	case 2:
		for (i = n; i >= 1; i--) 
			a(i);
		break;
	case 3:
		for (i = 1; i <= n; i++)
			b(n, i);
		break;
	case 4:
		for (i = n; i >= 1; i--)
			b(n, i);
		break;
	}
	return 0;
}
void a(int i) {
	int k;
	for (k = 1; k <= i; k++)
		printf("%3d", k);
	printf("\n");
}
void b(int n,int i) {
	int t,k;
	for (t = n - i; t >= 1; t--)
		printf("   ");
	for (k = 1; k <= i; k++)
		printf("%3d", k);
	printf("\n");
}