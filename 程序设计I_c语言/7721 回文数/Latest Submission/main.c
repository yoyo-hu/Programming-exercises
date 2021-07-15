#include <stdio.h>
int p(int a);
int main() {
	int n, t;
	int y;
	int x;//用来输入
	int i = 0, k = 2; //用来计数

	scanf("%d", &n);
	for (; n > 0; n--) {
		scanf("%d", &x);
        i = 0;
		t = x;
		while (t > 9) {
			i++;
			t /= 10;
		}
		if (i == 0)
			printf("Yes\n");
		else {
			if (x % 10 != x / p(i))
				t = 100;
			y = x % 10;
            k = 2;
			for (i = i - 1; i >= 3 && i >= k; i-- && k++) {
				if ((x % p(k) - y) / p(k - 1) != x / p(i) % 10) {
					t = 100;
					break;
				}
				y = x % p(k);
			}
			if (t != 100)
				printf("Yes\n");
			else
				printf("No\n");
		}
	}
	return 0;
}
int p(int a) {
	int t=1;
	for (; a > 0; a--) {
		t *= 10;
	}
	return t;
}