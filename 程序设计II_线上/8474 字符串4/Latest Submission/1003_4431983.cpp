#include <stdio.h>
#include <string.h>
int main() {
	char a[105];
	char b[105];
	scanf("%s", a);
	scanf("%s", b);
	int len_a = strlen(a);
	int len_b = strlen(b);
	int numOfDelet = 0;
	for (int i = 0; i < len_b; i++) {
		for (int j = 0; j < len_a; j++) {
			if (a[j] == b[i]) {
				a[j] = ' ';
				numOfDelet++;
			}
		}
	}
	for (int j = 0; j < len_a; j++) {
		if (a[j] == ' ') {
			int temp = j;
			while (a[temp] != '\0') {
				a[temp] = a[temp + 1];
				temp++;
			}
			j--;
			len_a--;
		}
	}
	printf("%s", a);
}
