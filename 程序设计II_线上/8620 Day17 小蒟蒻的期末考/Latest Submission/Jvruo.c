#include <stdio.h>
#define ll long long
ll result = 0;
int b[30] = { 0 };
void search(ll* a, int nums, ll aim, ll sum,int start) {
	if (sum <= aim)
		result++;
	else return;
	for (int i = start; i < nums; i++) {
		if (b[i] == 0 && sum + a[i] <= aim) {
			sum += a[i];
			b[i] == 1;
			search(a, nums, aim, sum,i+1);
			sum -= a[i];
			b[i] == 0;
		}
	}
}
int main() {
	int n;
	ll time;
	ll a[30];
	scanf("%d", &n);
	scanf("%lld", &time);
	for (int i = 0; i < n; i++) {
		scanf("%lld",&a[i]);
	}
	search(a, n, time, 0,0);
	printf("%lld", result);
}