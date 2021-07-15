#include <stdio.h>
#include <ctype.h>
int main() {
	int a[200] = { 0 };
	char t,k='0';
	a[(int)'W'] = 1;
	int max = 0;
	while ((t = getchar()) != EOF) {
		if (t == '\n' || t == ' '){
			if(islower(k))
				a[(int)'W']++;}
		else
			a[(int)t]++;
		k = t;
	}
	if (k == '\n' || k == ' ')
		a[(int)'W']--;
	if(k!='0'){
	for (int i = 87; i <= 122; i++) {
		if (a[i] > max)
			max = a[i];
	}
	for (int i = max; i > 0; i--) {
		printf("%d\t", i);
		for (int j = 97; j <= 122; j++) {
			if (a[j] == 0)
				continue;
			else if (a[j] >= i)
				printf("*");
			else
				printf(" ");
		}
		if (a[87] >= i)
			printf("*\n");
		else
			printf(" \n");
	}
	printf(" \t");
	for (int j = 97; j <= 122; j++) {
		if (a[j] > 0)
			printf("%c", (char)j);
	}
	printf("W");}
	return 0;
}