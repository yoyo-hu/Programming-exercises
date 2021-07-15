#include <stdio.h>
#include "twinPrimes.h"

int main(){
	int n, num;
	scanf("%d", &n);
	num = twinPrimes(n);
	printf("%d\n", num);
	return 0;
}
