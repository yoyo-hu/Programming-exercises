#include <stdio.h>
int main() {
	int P;
	int i;
	int t=0;

	scanf("%d", &P);
    if (P == 1)
		t = 1;
	for (i = 2; i < P; i++) {
		if (P % i == 0) {
			t = 1;
			break;
		}
	}
	if (t)
		printf("No");
	else
		printf("Yes");
	return 0;
}