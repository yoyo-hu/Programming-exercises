#include <stdio.h>

int main() {
	int n;
	scanf("%d\n", &n);
	int dot1 = 0;
	int dot2 = 2*n-2;
	int dot3 = dot2;
	int dot4 = 4*n-4;
	for (int i = 0; i < n; ++ i) {
		for (int j = 0; j < 4*n-3; ++ j) 
			if (j == dot1 || j == dot2 || j == dot3 || j==dot4) putchar('*');
			else putchar(' ');
			
		++ dot1;
		++ dot3;
		--dot2;
		--dot4;
		
		putchar('\n');
	}
}

