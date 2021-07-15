#include "stdio.h"
#include "head.h"

int main(){
	int n ;
	scanf("%d", &n);
	int f = fibonacci(n);
	printf("%d\n", f);
	return 0;
}

