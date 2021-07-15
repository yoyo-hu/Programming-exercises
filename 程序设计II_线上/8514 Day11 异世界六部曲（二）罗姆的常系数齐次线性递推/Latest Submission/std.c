#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MOD 1000000007
typedef long long ll;
void deleteArray(ll** a, int m) {
	for (int i = 0; i < m; i++) {
		free(a[i]);
	}
	free(a);
}

ll** matrixMultiply(ll** a, ll** b, int m, int s, int n) {
	ll** result = (ll**)malloc(m * sizeof(ll*));
	for (int i = 0; i < m; i++) {
		result[i] = (ll*)malloc(n * sizeof(ll));
		memset(result[i], 0, sizeof(ll) * n);
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < s; k++) {
				result[i][j] += (a[i][k] * b[k][j]) % MOD;
				result[i][j] %= MOD;
			}
		}
	}
	return result;
}
ll **myMatrixPow(ll** a, int m, ll n) {
	ll** res = (ll**)malloc(m * sizeof(ll*));
	for (int i = 0; i < m; i++) {
		res[i] = (ll*)malloc(m * sizeof(ll));
		memset(res[i], 0, sizeof(ll) * m);
		res[i][i] = 1;
	}
	ll** oldPoint = NULL;
	while (n) {
		if (n % 2 == 1) {
			oldPoint = res;
			res = matrixMultiply(res, a, m, m, m);
			deleteArray(oldPoint, m);
		}
		oldPoint = a;
		a = matrixMultiply(a, a, m, m, m);
		deleteArray(oldPoint, m);
		n /= 2;
	}
    deleteArray(a, m);
	return res;
}

int main() {
	int k;
	ll n;
	ll f[25] = { 0 };
	scanf("%d%lld", &k, &n);
	ll temp = 0;
	for (int i = 1; i <= k; i++) {
		scanf("%lld", &f[i]);
	}
	if (n <= k) {
		printf("%lld", f[n]);
		return 0;
	}
	ll** a = (ll**)malloc(k * sizeof(ll*));
	for (int i = 0; i < k; i++) {
		a[i] = (ll*)malloc(k * sizeof(ll));
		memset(a[i], 0, sizeof(ll) * k);
		if (i > 0)a[i][i - 1] = 1;
	}
	for (int i = 0; i < k; i++)
		scanf("%lld", &a[0][i]);;
	ll** res = myMatrixPow(a, k, n - k);
	/*for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%lld", res[i][j]);
		}
		printf("\n");
	}*/
	for(int i = 1; i <= k; i++) {
		temp += f[i] * res[0][k - i] % MOD;
		if (temp > MOD)
			temp = temp % MOD;
	}
	printf("%lld", temp);
	deleteArray(res, k);
	return 0;
}