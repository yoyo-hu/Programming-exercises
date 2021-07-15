#include <stdio.h>
int ji[2000000];
int ou[2000000];
int main() {
	int n = 1;
	int m;
	int temp;
	int mark_ji = 0, mark_ou = 0;
	int len_ji = 0, len_ou = 0;
	int flag = 0;
	scanf("%d", &m);
	for (int i = 0; i < m; i++) {
		n *= 2;
	}
	for (int i = 0; i < n; i++) {
		scanf("%d", &temp);
		if (temp % 2 == 0)
			ou[len_ou++] = temp;
		else
			ji[len_ji++] = temp;
	}
	while (mark_ji < len_ji && mark_ou < len_ou) {
		if (ou[mark_ou] < ji[mark_ji]) {
			if (flag == 0)
				flag = 1;
			else
				printf(" ");
			printf("%d", ou[mark_ou]);
			mark_ou++;
		}
		else {
			if (flag == 0)
				flag = 1;
			else
				printf(" ");
			printf("%d", ji[mark_ji]);
			mark_ji++;
		}
	}
	while (mark_ji < len_ji) {
		if (flag == 0)
			flag = 1;
		else
			printf(" ");
		printf("%d", ji[mark_ji]);
		mark_ji++;
	}
	while (mark_ou < len_ou) {
		if (flag == 0)
			flag = 1;
		else
			printf(" ");
		printf("%d", ou[mark_ou]);
		mark_ou++;
	}
	return 0;
}