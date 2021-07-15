#include <stdio.h>
void search(int);
void print();
int a[9] = { 0 };
int n;
_Bool b[9] = { 0 };
int main() {
	scanf("%d", &n);
	search(1);
	return 0;
}
void search(int k) {
	for (int i = 1; i <= n; i++)
		if (b[i] == 0) {
			a[k] = i;
			b[i] = 1;
			if (k == n)
				print();
			else
				search(k + 1);
			b[i] = 0;
		}

}
void print() {
	for (int i = 1; i <= n-1; i++)
		printf("%d ", a[i]);
	printf("%d\n", a[n]);
}