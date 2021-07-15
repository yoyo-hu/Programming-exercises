#include <stdio.h>
int main() {
	int N;
	scanf("%d", &N);
	int k1 = 2 * N - 3;
	int k2 = 0;
	int k3 = 0;
    if(N==1)
    printf("*\n");
    else
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < k2; j++)
                printf(" ");
            printf("*");
            for (int j = 0; j < k1; j++)
                printf(" ");
            if (k1 > 0)
                printf("*");
            for (int j = 0; j < k3; j++)
                printf(" ");
            if (k1 >0&&k3!=0)
                printf("*");
            for (int j = 0; j < k1; j++)
                printf(" ");
            printf("*");
            for (int j = 0; j < k2; j++)
                printf(" ");
            printf("\n");
            k1 -= 2;
            k2 += 1;
            if(k3==0)
                k3++;
                else
                k3 += 2;
        }
	return 0;
}