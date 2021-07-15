#include <stdio.h>
#include <ctype.h>
int main() {
	char a[105];
	scanf("%s", a);
	char k;
	int i, j;
	for (i = 0;a[i]!='\0'; i++) {
		if(isdigit(a[i + 1])==0)
				printf("%c", a[i]);
		else {
			k = a[i];
			int t = 0;
			while (isdigit(a[++i]))
				t = ((int)a[i] - 48 + t * 10);
			if (t > 7)
				t = t % 7 + 1;
			for (j = 0; j < t; j++)
				printf("%c", k);
			i--;
		}
	}
	return 0;
}