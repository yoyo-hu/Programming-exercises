#include <stdio.h>
#define ll long long
ll a[100005];
int main() {
	int n;
	ll max1=0, max2=0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		if (a[i] > max1)
			 max1=a[i];
	}
	for (int i = 0; i < n; i++) {
		if (a[i] > max2 && a[i] < max1)
			max2 = a[i];
	}
	if (max2 == 0)
		printf("0");
	else
		printf("%d", max2 % max1);
	return 0;
}