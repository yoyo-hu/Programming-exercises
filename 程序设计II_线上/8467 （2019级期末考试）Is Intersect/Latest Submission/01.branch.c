#include <stdio.h>
int main() {
	int b1, e1, b2, e2;
	for (int i = 0; i < 10; i++) {
		scanf("%d%d%d%d", &b1, &e1, &b2, &e2);
		if (e2 < b1 || e1 < b2)
			printf("false\n");
		else
			printf("true\n");
	}
	return 0;
}