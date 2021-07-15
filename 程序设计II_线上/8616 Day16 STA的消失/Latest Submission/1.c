#include <stdio.h>
#include <string.h>
int match(char* x, char* y);
int main() {
	char a[1005];
	char b[2010];
	scanf("%s", a);
	scanf("%s", b);
	int last = strlen(a);
	for (int i = 0; i < strlen(a); i++) {
			b[last] = b[i];
			last++;
			b[last] = '\0';
			if (match(a, b + i+1)) {
				printf("%d", i+1);
				return 0;
			}
	}


	return 0;
}
int match(char* x, char* y) {
	for(int i = 0; i < strlen(x); i++) {
		if (x[i] != y[i])
			return 0;
	}
	return 1;
}