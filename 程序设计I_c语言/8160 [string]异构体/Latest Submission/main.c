#include <stdio.h>
#include <string.h>
int main() {
	char a[105], b[105];
	int k;
	int x=0, y=0;
	scanf("%s", a);
	scanf("%s", b);
	if ((k=strlen(a)) != strlen(b))
		printf("No\n");
	else {
		for (int i = 0; i < k; i++) {
			x = 0;
			for (int j = 0; j < k; j++)
				if (a[i] == b[j]){
					x = 1;
					b[j] = '1';
					break;
				}
			if (x == 0)
				y = 1;
		}
		if (y == 0)
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}