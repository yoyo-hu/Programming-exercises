#include "stdio.h"
#include "head.h"

int main(){
	int m, n;
	scanf("%d %d",&m,&n);
	int f = gcd(m, n);
	printf("%d\n",f);
	return 0;
}

