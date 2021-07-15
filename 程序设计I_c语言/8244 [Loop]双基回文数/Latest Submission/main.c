#include <stdio.h>
void ispa(int p[],int m);
int t=0;
int main() {
	int n;
	int b[100];
	int x,y;
	int j;
	scanf("%d", &n);
	for (int i=0; i < n; i++) {
		scanf("%d", &x);
		int a[10] = { 0 };
		for (j = x+1;; j++) {
			t = 0;
			int y = j;
			int d = 0;
			while (y != 0) {
				b[d++] = y % 10;
				y /= 10;
			}
			ispa(b, d - 1);
			for(int k=9;k>1;k--){
				y = j;
				d = 0;
				while (y != 0) {
					b[d++]=y % k;
					y /= k;
				}
				ispa(b,d-1);
				if (t >= 2)
					break;
			}
			if (t >= 2)
				break;
		}
		printf("%d\n", j);
	}
}
void ispa(int p[], int m) {
	int a = 0;
	int b = m;
	while (a < b && p[a] == p[m]) {
		a++;
		m--;
	}
	if (a >= b)
		t++;
}