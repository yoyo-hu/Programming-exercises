#include <stdio.h>
int main() {
	int n, m;
	scanf("%d%d", &n, &m);
	if (n == 0) {
		printf("1.0000");
	}
    else if(n%2==1)
        printf("0.0000");
	else
		printf("%.4f", 1.0 /(n+1));
	return 0;
}