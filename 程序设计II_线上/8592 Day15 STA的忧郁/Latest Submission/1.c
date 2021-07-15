#include <stdio.h>
const int mod=1000000009;
#define ll long long
ll a[4] = { 0 };
ll D(int sub) {
	if (sub == 1)
		return 0;
	if (sub == 2)
		return 1;
	else {
		for (int i = 3; i <= sub; i++)
			a[i%3] = ((ll)i - 1) * (a[(i - 1)%3] + a[(i - 2)%3])%mod;
		return a[sub%3];
	}
}
int main() {
	int n;
	ll result;
	scanf("%d", &n);
	a[1] = 0, a[2] = 1;
	result=D(n);
	printf("%lld", result);
	return 0;
}