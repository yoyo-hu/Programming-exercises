#include <stdio.h>
const int mod = 1000000009;
#define ll long long
ll a[3005][3005] = { 0 };
ll S(int n, int k) {
	a[1][1] = 1;
	for (int i = 2; i <= n ; i++) {
		for (int j = 1; j <= i; j++) {
			a[i][j] = a[i - 1][j - 1] + j * a[i - 1][j];
			if (a[i][j] >= mod)
				a[i][j] %= mod;
		}
	}
	return a[n][k];
}
int main() {
	int n, k;
	ll m;
	scanf("%d%d", &n, &k);
	m=S(n, k);
	printf("%lld", m);
	return 0;
}