#include <stdio.h>
#include <math.h>
int main() {
	unsigned long long N, M;
	long long a, b;
	long long x,y;
	int k;
	scanf("%llu%llu", &N, &M);
	for (x=sqrt(2*M); x >0; x--) {
		if (2 * M % x == 0) {//排除整数以外 
			y = 2 * M / x;
			k = y - x + 1;
			if(k>0&&k%2==0&& (x + y - 1)%2==0){
			a = k / 2;
			b = (x + y - 1) / 2;
			printf("[%lld,%lld]\n", a, b);
			}
		}
		}
	return 0;
}