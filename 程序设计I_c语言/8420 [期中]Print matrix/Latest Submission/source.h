#include <stdio.h>
int main() {
	int N;
	scanf("%d", &N);
	int k1 =(N-3)/2;
	int k2 = 0;
	int k3 = 2;
	for (int i = 0; i < N/2; i++) {
		for (int j = 0; j < k2; j++)
			printf(" ");
		printf("1");
		for (int j = 0; j < k1; j++)
			printf(" ");
		printf("2");
		for (int j = 0; j < k1; j++)
			printf(" ");
		printf("3");
		for (int j = 0; j < k3; j++)
			printf(" ");
		printf("\n");
		k1 --;
		k2 ++;
		k3 ++;
	}
	for (int j = 0; j < N/2; j++)
		printf("8");
	printf("9");
	for (int j = 0; j < N / 2; j++)
		printf("4");
	printf("  \n");
	for (int i = 0; i < N / 2; i++) {
		k1++;
		k2--;
		k3--;
		for (int j = 0; j < k2; j++)
			printf(" ");
		printf("7");
		for (int j = 0; j < k1; j++)
			printf(" ");
		printf("6");
		for (int j = 0; j < k1; j++)
			printf(" ");
		printf("5");
		for (int j = 0; j < k3; j++)
			printf(" ");
		printf("\n");
	}
	return 0;
}