#include <stdio.h>
#include <ctype.h>
int main() {
	char a[35];
	int i = 0;
	scanf("%s", a);
	while (a[i] != '\0') {
		if (isalpha(a[i]))
			printf("%c", toupper(a[i]));
		i++;
	}
	return 0;
}