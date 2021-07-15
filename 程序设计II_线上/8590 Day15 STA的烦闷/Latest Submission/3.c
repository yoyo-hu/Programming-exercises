#include <stdio.h>
const int mod = 1000000009;
#define ll long long
ll quickpow(ll a, ll b) {
	ll ret = 1;
	a %= mod;
	while (b) {
		if (b % 2) ret = (ret * a) % mod;
		b /= 2;
		a = (a * a) % mod;
	}
	return ret;
}

ll factorial(ll m) {
	ll ret1 = 1;
	ll ret2 = 1;
	ll mark = m / 2;
	while (m>mark) {
		ret1 *= m;
		ret1 %= mod;
		m--;
	}
	while (mark) {
		ret2 *= mark;
		ret2 %= mod;
		mark--;
	}
	ret2 = quickpow(ret2, mod - 2);
	return ret1*ret2%mod;
}
int main() {
	ll n;
	ll a, b;
	scanf("%lld", &n);
	b = quickpow(n + 1.0, mod - 2);
	a = factorial(2*n);
	printf("%lld", a * b % mod);
	return 0;
}